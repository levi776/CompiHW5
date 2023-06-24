#ifndef _236360_3_
#define _236360_3_

#include <vector>
#include <string>
#include "bp.hpp"
using namespace std;

typedef struct tk_att {
    public:
        int intVal;
        string strVal;
        string type;
        string name;
        string llvm_name; //var in nikita
        vector<pair<int,BranchLabelIndex>> trueList;
        vector<pair<int,BranchLabelIndex>> falseList;
        vector<pair<int,BranchLabelIndex>> nextList;
        vector<pair<int,BranchLabelIndex>> breakList;
        vector<pair<int,BranchLabelIndex>> contList;
        vector<vector<pair<int,BranchLabelIndex>>> trueListList;
        vector<vector<pair<int,BranchLabelIndex>>> falseListList;
        string label;
        bool is_func;
    }token_att;

#define YYSTYPE token_att*

namespace output{
    void endScope();
    void printID(const string& id, int offset, const string& type);

    /* Do not save the string returned from this function in a data structure
        as it is not dynamically allocated and will be destroyed(!) at the end of the calling scope.
    */
    string makeFunctionType(const string& retType, vector<string>& argTypes);

    void errorLex(int lineno);
    void errorSyn(int lineno);
    void errorUndef(int lineno, const string& id);
    void errorDef(int lineno, const string& id);
    void errorUndefFunc(int lineno, const string& id);
    void errorMismatch(int lineno);
    void errorPrototypeMismatch(int lineno, const string& id);
    void errorUnexpectedBreak(int lineno);
    void errorUnexpectedContinue(int lineno);
    void errorMainMissing();
    void errorByteTooLarge(int lineno, const string& value);
    void errorFuncNoOverride(int lineno, const string& id);
    void errorOverrideWithoutDeclaration(int lineno, const string& id);
    void errorAmbiguousCall(int lineno, const string& id);
    void errorMainOverride(int lineno);
}

#endif