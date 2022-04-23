#include "include/BaseVisitor/BaseVisitor.h"

using namespace llvm;
using namespace clang;
using namespace clang::tooling;
using namespace std;

namespace omp2cd_space {

int BaseVisitor::getNewNodeID()
{
    int newNodeID = dfgNodesCount++;
    return newNodeID;
}

std::string BaseVisitor::getCalleeFunctionName(CallExpr* s)
{
    string calleeFunctionName = "";

    Decl* calleeDecl = s->getCalleeDecl();

    if (calleeDecl)
        calleeFunctionName = getNameFromDecl(calleeDecl);

    return calleeFunctionName;
}

bool BaseVisitor::isTraversableStmt(clang::Stmt* s)
{
    // LLVM15
    bool res = false;
    if (s && !isa<NullStmt>(s) && !isa<ImplicitCastExpr>(s) && !isa<DeclRefExpr>(s)
        && !isa<ValueStmt>(s) && !isa<IntegerLiteral>(s) && !isa<ParenExpr>(s) // LiteralSttm -> ValueStmt
        && !isa<CapturedStmt>(s))
        res = true;

    return res;
}
}
