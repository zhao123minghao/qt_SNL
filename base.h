#ifndef BASE_H_INCLUDED
#define BASE_H_INCLUDED
#include<list>
#include<stack>
#include<string.h>
typedef int lex_type;

struct st_token
{
    int line;
    int row;
    lex_type lex;
    char sem[256];
    int length;
};
using namespace std;
typedef list<st_token *>  token_list;
typedef list<st_token *>::iterator token_iterator;

const char SNL_RESERVED[64][10] = {
    "PROGRAM","PROCEDURE","TYPE","VAR","IF",
    "THEN","ELSE","FI","WHILE","DO",
    "ENDWH","BEGIN","END","READ","WRITE",
    "ARRAY","OF","RECORD","RETURN","INTEGER","CHAR",
    "program","procedure","type","var","if",
    "then","else","fi","while","do",
    "endwh","begin","end","read","write",
    "array","of","record","return","integer","char"
};

struct LL_tree_node
{
    int ll_tree_type;
    char ll_str[256];
    int line_num;
    int value = 0;
    LL_tree_node * child = NULL;
    LL_tree_node * brother = NULL;
};

typedef stack<LL_tree_node *>  stack_tree;

struct st_LL
{
    int ll_type;
    char str[256];
    st_LL *child;
    st_LL *brother;
    st_LL()
    {
        ll_type = 0;
        str[0] = 0;
        child = NULL;
        brother = NULL;
    }
};

typedef stack<st_LL *>  stack_ll;

#define SNL_RESERVED_NUM 38

#define PROGRAM 1
#define PROCEDURE 2
#define TYPE 3
#define VAR 4
#define IF 5
#define THEN 6
#define ELSE 7
#define FI 8
#define WHILE 9
#define DO 10
#define ENDWH 11
#define BEGIN 12
#define END 13
#define READ 14
#define WRITE 15
#define ARRAY 16
#define OF 17
#define RECORD 18
#define RETURN 19
#define INTEGER 20
#define CHAR 21

#define Program     22
#define ProgramHead 23
#define ProgramName 24
#define DeclarePart 25
#define TypeDecpart 26
#define TypeDec     85
#define TypeDecList 86
#define TypeDecMore 87
#define TypeDeclaration 88
#define TypeId      27
#define TypeDef     28
#define BaseType    29
#define StructureType   30
#define ArrayType   31
#define Low         32
#define Top         33
#define RecType     34
#define FieldDecList    35
#define FieldDecMore    36
#define IdList      37
#define IdMore      38
#define VarDeclaration  39
#define VarDec      40
#define VarDecList  41
#define VarDecMore  42
#define VarIdList   43
#define VarIdMore   44
#define ProcDeclaration 45
#define ProcDec     46
#define ProcDecMore 47
#define ProcDecName 48
#define ProcName    89
#define ParamList   49
#define ParamDecList  50
#define ParamMore   51
#define Param       90
#define FormList    52
#define FidMore     53
#define ProcDecPart 54
#define ProcBody    55
#define ProgramBody 56
#define StmList     57
#define StmMore     58
#define Stm         59
#define AssCall     60
#define AssignmentRest  61
#define ConditionalStm  62
#define LoopStm     63
#define InputStm    64
#define InVar       65
#define OutputStm   66
#define ReturnStm   67
#define CallStmRest 68
#define ActParamList    69
#define ActParamMore    70
#define RelExp      71
#define OtherRelE   72
#define Exp         73
#define OtherTerm   74
#define Term        75
#define OtherFactor 76
#define Factor      77
#define Variable    78
#define VariMore    79
#define FieldVar    80
#define FieldVarMore    81
#define CmpOp       82
#define AddOp       83
#define MultOp      84

#define Empty       22
#define ID          23
#define INTC        24
#define NUM         24
#define SEMIC       25
#define COMMA       26
#define LBRACKET    27
#define RBRACKET    28
#define ASSIGN      29
#define LSBRACKET   30
#define RSBRACKET   31
#define DOT         32
#define LT          33
#define GT          34
#define EQ          35
#define PLUS        36
#define SUB         37
#define MULT        38
#define DIV         39

#define NONE		0
#define INID		23
#define RESERVED    2
#define DIV_SINGLE  5
#define DIV_DOUBLE  29
#define EXP_START   7
#define EXP_ENDING  8
#define STR_SYMBOL  9
#define INRANGE		10
#define PROGRAM_END 42

#define LEX_ERROR	-1

#endif // BASE_H_INCLUDED
