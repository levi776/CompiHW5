#ifndef PARSER_HELPER_HPP
#define PARSER_HELPER_HPP
#include <iostream>
#include "hw3_output.hpp"
#include "symtab.hpp"
#include <string.h>
#include "registers.hpp"
#include "bp.hpp"
#include <map>
CodeBuffer& cbf = CodeBuffer::instance();
Registers& rgs = Registers::instance();

string convertToLLVMType(string type)
{
    if(type == "INT" || type == "BOOL" || type == "BYTE"){
        return string("i32");
    }
    else {
        if(type == "VOID")
            {
                return string("void");
            }
    return string("elemntptr");
    }
}


void initDeclarations()
{
    cbf.emit("@.error = constant [23 x i8] c\"Error division by zero\\00\"\n
    declare i32 @printf(i8*, ...)\n
    declare void @exit(i32)\n
    @.int_specifier = constant [4 x i8] c\"\%d\\0A\\00\"\n
    @.str_specifier = constant [4 x i8] c\"\%s\\0A\\00\"\n
    
    define void @printi(i32) 
    {\n
        %spec_ptr = getelementptr [4 x i8], [4 x i8]* @.int_specifier, i32 0, i32 0\n
        call i32 (i8*, ...) @printf(i8* %spec_ptr, i32 %0)\n
        ret void \n
    }\n
    
    define void @print(i8*) 
    {\n
        %spec_ptr = getelementptr [4 x i8], [4 x i8]* @.str_specifier, i32 0, i32 0\n
        call i32 (i8*, ...) @printf(i8* %spec_ptr, i8* %0)\n
        ret void\n
    }");
}

void printGlobalAndCodeBuffer() 
{
    cbf.printGlobalBuffer();
    cbf.printCodeBuffer();
}

void declareFunction(bool is_override, string func_name, string func_arguments_type_string, string func_arguments_name_string, string fresh_func_name)
{
    //string fresh_func_name = rgs.freshVar(func_name, /*is_global = */true); -> this is now created in parser.ypp

    int cnt = 0;
    string arguments = "";

    vector<string> types_vec = parseString(func_arguments_type_string);
    vector<string> names_vec = parseString(func_arguments_name_string); 
    
    for(auto type_iterator = types_vec.begin(), name_iterator = names_vec.begin(); type_iterator < types_vec.end(); type_iterator++, name_iterator++)
    {
        string type = convertToLLVMType(*type_iterator);
        load_params.push_back("%" + *name_iterator + " = alloca " + type);
        load_params.push_back("store " + type + " %" + to_string(cnt) + ", " + type + "* %" + *name_iterator);
        arguments += convertToLLVMType(*type_iterator);
        if(type_iterator + 1 != types_vec.end())
        {
            arguments += ", ";
        }
        cnt ++;
    }
    
    string LLVM_FUNC_DEFINITION = "define" + fresh_func_name + " (" + arguments + " ) {"  ;
    cbf.emit(LLVM_FUNC_DEFINITION);
    for(string load_param_str : load_params)
    {
        cbf.emit(load_param_str);
    }
}

void closeFunction(vector<pair<int,BranchLabelIndex>>& nextlist, string return_type)
{
    bpVector(nextlist);
    /*if(!nextlist.empty())
    { 
        string label = cbf.genLabel();
        cbf.bpatch(nextlist, label); 
    }*/
    cbf.emit("ret ");
    switch(return_type){
    case "VOID": cbf.emit("void"); break;
    case "INT": cbf.emit("ret i32 0"); break;
    case "BYTE": cbf.emit("ret i32 0"); break;
    case "BOOL": cbf.emit("ret i32 false"); break;
    }
    cbf.emit("}");
}      
void bpVector(vector<pair<int,BranchLabelIndex>>& nextlist,string f_label = ""){
    if(!nextlist.empty())
    { 
        string label;
        if(f_label == "")
        {
         label = cbf.genLabel();
        }
        else {
            label = f_label;
        }
        cbf.bpatch(nextlist, label); 
    }
}     
void varDefintionGenerate(string type){
    //need to understand and change names but keep the logic
    string reg_from = "0";
    if (type == "BOOL")
        {
          int false_line = cbf.emit("br label @");
          int true_line = cbf.emit("br label @");

          string true_label = cbf.genLabel();
          int true_line_to_next = cbf.emit("br label @");
          string false_label = cbf.genLabel();
          int false_line_to_next = cbf.emit("br label @");
          
          string next_label = cbf.genLabel();

          cbf.bpatch(cbf.makelist({false_line, FIRST}), false_label);
          cbf.bpatch(cbf.makelist({true_line, FIRST}), true_label);

          cbf.bpatch(cbf.makelist({true_line_to_next, FIRST}), next_label);
          cbf.bpatch(cbf.makelist({false_line_to_next, FIRST}), next_label);

          string reg_phi = rgs.freshVar();//for this we need the ig?
          cbf.emit(reg_phi + " = phi i32 [1, %" + true_label + "], [0, %" + false_label + "]");
          reg_from = reg_phi;
        }
        cbf.emit(var_name + " = alloca i32");        
        cbf.emit("store i32 " + reg_from +", i32* " + var_name);
      }
void varDefintionAndAssignmentGenerate(string llvm_var, string exp_llvm_name, string exp_type,
vector<pair<int,BranchLabelIndex>>& exp_true_list, vector<pair<int,BranchLabelIndex>>& exp_false_list){
        string llvm_var_name = llvm_var;
        string reg_from = exp_llvm_name;
        if(exp_type == "BOOL")
        {
            string true_label = cbf.genLabel();
            int true_line = cbf.emit("br label @");
            string false_label = cbf.genLabel();
            int false_line = cbf.emit("br label @");
            string next_label = cbf.genLabel();

            bpVector(cbf.makelist({true_line, FIRST}), next_label);
            bpVector(cbf.makelist({false_line, FIRST}), next_label);
            bpVector(exp_true_list, true_label);
            bpVector(exp_false_list, false_label);

            string reg_phi = rgs.freshVar();
            cbf.emit(reg_phi + " = phi i32 [1, %" + true_label + "], [0, %" + false_label + "]");
            reg_from = reg_phi;
        }

        cbf.emit(llvm_var_name + " = alloca i32");
        cbf.emit("store i32 " + reg_from + ", i32* " + llvm_var_name);
    }
string opcode_to_cmd(string op, string type){

    bool is_signed = (type == "INT");
    string to_ret;
    switch(op){
        case "+":  
        to_ret = "add";
        break;

        case "-":
        to_ret ="sub";
        break;

        case "*":
        to_ret ="mul";
        break;

        case "/":
        to_ret = (is_signed)? "sdiv" : "udiv" ;
        break;

        case "==":
        to_ret = "eq" ;
        break;

        case "!=":
        to_ret = "ne";
        break;

        case ">":
        to_ret = (is_signed)? "sgt" : "ugt" ; // un/signed greater than
        break;

        case ">=":
        to_ret = (is_signed)? "sge" : "uge";
        break;

        case "<":
        to_ret = (is_signed)? "slt" : "ult" ;
        break;

        case "<=":
        to_ret = (is_signed)? "sle" : "ule" ;
        break;

        default:
        to_ret ="";
        break;
    }
    return to_ret;
}
void resolve_jump_next_line(string startLabel) //think about better name than token
{
    vector<string> labels_vec = parseString(startLabel);
    if(labels_vec.size() > 0){
    cbf.bpatch(token->jumpList, labels_vec.at(0));
    }
}
#endif 