#ifndef PARSER_HELPER_HPP
#define PARSER_HELPER_HPP
#include <iostream>
#include "hw3_output.hpp"
#include "symtab.hpp"
#include <string.h>
#include "registers.hpp"
#include "bp.hpp"

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

void declareFunction(bool is_override, string func_name, string func_arguments_type_string, string func_arguments_name_string)
{
    string fresh_func_name = rgs.freshVar(func_name, /*is_global = */true);

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
    if(!nextlist.empty())
    { 
        string label = cbf.genLabel();
        cbf.bpatch(nextlist, label); 
    }
    cbf.emit("ret ");
    switch(return_type){
    case "VOID": cbf.emit("void"); break;
    case "INT": cbf.emit("ret i32 0"); break;
    case "BYTE": cbf.emit("ret i32 0"); break;
    case "BOOL": cbf.emit("ret i32 false"); break;
    }
    cbf.emit("}");
}      
      
    


#endif 