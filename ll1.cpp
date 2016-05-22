#include "ll1.h"
#include "tree.h"
#include "lex_type.h"

int LL_table[96][96];

LL_tree_node * LL_main(token_list tokens)
{
    LL_tree_node * ret;
    int line_no;
    stack_ll sysmbel_stack;
    stack_ll gram_tree_stack;
    stack_ll operator_stack;
    stack_ll num_stack;

    create_ll_table();
    ret =  create_node();

    while(!sysmbel_stack.empty())
    {
        st_LL * sys_pointer = sysmbel_stack.top();
        if(is_terminal(sys_pointer))
        {
            if(match())
            {
                sysmbel_stack.pop();
                sysmbel_stack.push();
            }
            else
            {
                //error
            }
        }
        else
        {
            int row = 1;
            switch()
            {

            }
        }
    }

    return ret;
}

void create_ll_table()
{
    int i,j;
    for(i = 0;i<96;i++)
    {
        for(j = 0;j<96;j++)
        {
            LL_table[i][j] = 0;
        }
    }

    LL_table[Program][PROGRAM] = 1;
    LL_table[ProgramHead][PROGRAM] = 2;
    LL_table[ProgramName][ID] = 3;
    LL_table[DeclarePart][TYPE] = 4;
    LL_table[DeclarePart][VAR] = 4;
    LL_table[DeclarePart][PROCEDURE] = 4;
    LL_table[DeclarePart][BEGIN] = 4;
    LL_table[TypeDec][VAR] = 5;
    LL_table[TypeDec][PROCEDURE] = 5;
    LL_table[TypeDec][BEGIN] = 5;
    LL_table[TypeDec][TYPE] = 6;
    LL_table[TypeDeclaration][TYPE] = 7;
    LL_table[TypeDecList][ID] = 8;
    LL_table[TypeDecMore][VAR] = 9;
    LL_table[TypeDecMore][PROCEDURE] = 9;
    LL_table[TypeDecMore][BEGIN] = 9;
    LL_table[TypeDecMore][ID] = 10;
    LL_table[TypeId][ID] = 11;
    LL_table[TypeDef][INTEGER] = 12;
    LL_table[TypeDef][CHAR] = 12;
    LL_table[TypeDef][ARRAY] = 13;
    LL_table[TypeDef][RECORD] = 13;
    LL_table[TypeDef][ID] = 14;
    LL_table[BaseType][INTEGER] = 15;
    LL_table[BaseType][CHAR] = 16;
    LL_table[StructureType][ARRAY] = 17;
    LL_table[StructureType][RECORD] = 18;
    LL_table[ArrayType][ARRAY] = 19;
    LL_table[Low][INTC] = 20;
    LL_table[Top][INTC] = 21;
    LL_table[RecType][RECORD] = 22;
    LL_table[FieldDecList][INTEGER] = 23;
    LL_table[FieldDecList][INTEGER] = 23;
    LL_table[FieldDecList][ARRAY] = 24;
    LL_table[FieldDecMore][END] = 25;
    LL_table[FieldDecMore][INTEGER] = 26;
    LL_table[FieldDecMore][CHAR] = 26;
    LL_table[FieldDecMore][ARRAY] = 26;
    LL_table[IdList][ID] = 27;
    LL_table[IdMore][SEMIC] = 28;
    LL_table[IdMore][COMMA] = 29;
    LL_table[VarDec][PROCEDURE] = 30;
    LL_table[VarDec][BEGIN] = 30;
    LL_table[VarDec][VAR] = 31;
    LL_table[VarDeclaration][VAR] = 32;
    LL_table[VarDecList][INTEGER] = 33;
    LL_table[VarDecList][CHAR] = 33;
    LL_table[VarDecList][ARRAY] = 33;
    LL_table[VarDecList][RECORD] = 33;
    LL_table[VarDecList][ID] = 33;
    LL_table[VarDecMore][PROCEDURE] = 34;
    LL_table[VarDecMore][BEGIN] = 34;
    LL_table[VarDecMore][INTEGER] = 35;
    LL_table[VarDecMore][CHAR] = 35;
    LL_table[VarDecMore][ARRAY] = 35;
    LL_table[VarDecMore][RECORD] = 35;
    LL_table[VarDecMore][ID] = 35;
    LL_table[VarIdList][ID] = 36;
    LL_table[VarIdMore][SEMIC] = 37;
    LL_table[VarIdMore][COMMA] = 38;
    LL_table[ProcDec][BEGIN] = 39;
    LL_table[ProcDec][PROCEDURE] = 40;
    LL_table[ProcDeclaration][PROCEDURE] = 41;
    LL_table[ProcDecMore][BEGIN] = 42;
    LL_table[ProcDecMore][PROCEDURE] = 43;
    LL_table[ProcName][ID] = 44;
    LL_table[ParamList][RBRACKET] = 45;
    LL_table[ParamList][INTEGER] = 46;
    LL_table[ParamList][CHAR] = 46;
    LL_table[ParamList][ARRAY] = 46;
    LL_table[ParamList][RECORD] = 46;
    LL_table[ParamList][ID] = 46;
    LL_table[ParamList][VAR] = 46;
    LL_table[ParamDecList][INTEGER] = 47;
    LL_table[ParamDecList][CHAR] = 47;
    LL_table[ParamDecList][ARRAY] = 47;
    LL_table[ParamDecList][RECORD] = 47;
    LL_table[ParamDecList][ID] = 47;
    LL_table[ParamDecList][VAR] = 47;
    LL_table[ParamMore][LBRACKET] = 48;
    LL_table[ParamMore][SEMIC] = 49;
    LL_table[Param][INTEGER] = 50;
    LL_table[Param][CHAR] = 50;
    LL_table[Param][ARRAY] = 50;
    LL_table[Param][RECORD] = 50;
    LL_table[Param][ID] = 50;
    LL_table[Param][VAR] = 51;
    LL_table[FormList][ID] = 52;
    LL_table[FidMore][SEMIC] = 53;
    LL_table[FidMore][RBRACKET] = 53;
    LL_table[FidMore][COMMA] = 54;
    LL_table[ProcDecPart][TYPE] = 55;
    LL_table[ProcDecPart][VAR] = 55;
    LL_table[ProcDecPart][PROCEDURE] = 55;
    LL_table[ProcDecPart][BEGIN] = 55;
    LL_table[ProcBody][BEGIN] = 56;
    LL_table[ProcBody][BEGIN] = 57;
    LL_table[StmList][ID] = 58;
    LL_table[StmList][IF] = 58;
    LL_table[StmList][WHILE] = 58;
    LL_table[StmList][RETURN] = 58;
    LL_table[StmList][READ] = 58;
    LL_table[StmList][WRITE] = 58;
    LL_table[StmMore][ELSE] = 59;
    LL_table[StmMore][FI] = 59;
    LL_table[StmMore][END] = 59;
    LL_table[StmMore][ENDWH] = 59;
    LL_table[StmMore][SEMIC] = 60;
    LL_table[Stm][IF] = 61;
    LL_table[Stm][WHILE] = 62;
    LL_table[Stm][READ] = 63;
    LL_table[Stm][WRITE] = 64;
    LL_table[Stm][RETURN] = 65;
    LL_table[Stm][ID] = 66;
    LL_table[AssCall][ASSIGN] = 67;
    LL_table[AssCall][LBRACKET] = 68;
    LL_table[AssignmentRest][LSBRACKET] = 69;
    LL_table[AssignmentRest][DOT] = 69;
    LL_table[AssignmentRest][ASSIGN] = 69;
    LL_table[ConditionalStm][IF] = 70;
    LL_table[LoopStm][WHILE] = 71;
    LL_table[InputStm][READ] = 72;
    LL_table[InVar][ID] = 73;
    LL_table[OutputStm][WRITE] = 74;
    LL_table[ReturnStm][RETURN] = 75;
    LL_table[CallStmRest][LBRACKET] = 76;
    LL_table[ActParamList][RBRACKET] = 77;
    LL_table[ActParamList][LBRACKET] = 78;
    LL_table[ActParamList][INTC] = 78;
    LL_table[ActParamList][ID] = 78;
    LL_table[ActParamMore][RBRACKET] = 79;
    LL_table[ActParamMore][COMMA] = 80;
    LL_table[RelExp][LBRACKET] = 81;
    LL_table[RelExp][INTC] = 81;
    LL_table[RelExp][ID] = 81;
    LL_table[OtherRelE][LT] = 82;
    LL_table[OtherRelE][EQ] = 82;
    LL_table[Exp][LBRACKET] = 83;
    LL_table[Exp][INTC] = 83;
    LL_table[Exp][ID] = 83;
    LL_table[OtherTerm][LT] = 84;
    LL_table[OtherTerm][EQ] = 84;
    LL_table[OtherTerm][RSBRACKET] = 84;
    LL_table[OtherTerm][THEN] = 84;
    LL_table[OtherTerm][ELSE] = 84;
    LL_table[OtherTerm][FI] = 84;
    LL_table[OtherTerm][DO] = 84;
    LL_table[OtherTerm][ENDWH] = 84;
    LL_table[OtherTerm][RBRACKET] = 84;
    LL_table[OtherTerm][END] = 84;
    LL_table[OtherTerm][SEMIC] = 84;
    LL_table[OtherTerm][COMMA] = 84;
    LL_table[OtherTerm][PLUS] = 85;
    LL_table[OtherTerm][SUB] = 85;
    LL_table[Term][LSBRACKET] = 86;
    LL_table[Term][INTC] = 86;
    LL_table[Term][ID] = 86;
    LL_table[OtherFactor][PLUS] = 87;
    LL_table[OtherFactor][SUB] = 87;
    LL_table[OtherFactor][LT] = 87;
    LL_table[OtherFactor][EQ] = 87;
    LL_table[OtherFactor][RBRACKET] = 87;
    LL_table[OtherFactor][THEN] = 87;
    LL_table[OtherFactor][ELSE] = 87;
    LL_table[OtherFactor][FI] = 87;
    LL_table[OtherFactor][DO] = 87;
    LL_table[OtherFactor][ENDWH] = 87;
    LL_table[OtherFactor][RBRACKET] = 87;
    LL_table[OtherFactor][END] = 87;
    LL_table[OtherFactor][SEMIC] = 87;
    LL_table[OtherFactor][COMMA] = 87;
    LL_table[OtherFactor][MULT] = 88;
    LL_table[OtherFactor][DIV] = 88;
    LL_table[Factor][LBRACKET] = 89;
    LL_table[Factor][INTC] = 90;
    LL_table[Factor][ID] = 91;
    LL_table[Variable][ID] = 92;
    LL_table[VariMore][ASSIGN] = 93;
    LL_table[VariMore][MULT] = 93;
    LL_table[VariMore][DIV] = 93;
    LL_table[VariMore][PLUS] = 93;
    LL_table[VariMore][SUB] = 93;
    LL_table[VariMore][EQ] = 93;
    LL_table[VariMore][LT] = 93;
    LL_table[VariMore][THEN] = 93;
    LL_table[VariMore][ELSE] = 93;
    LL_table[VariMore][FI] = 93;
    LL_table[VariMore][DO] = 93;
    LL_table[VariMore][ENDWH] = 93;
    LL_table[VariMore][RBRACKET] = 93;
    LL_table[VariMore][END] = 93;
    LL_table[VariMore][SEMIC] = 93;
    LL_table[VariMore][COMMA] = 93;
    LL_table[VariMore][LSBRACKET] = 94;
    LL_table[VariMore][DOT] = 95;
    LL_table[FieldVar][ID] = 96;
    LL_table[FieldVarMore][ASSIGN] = 97;
    LL_table[FieldVarMore][MULT] = 97;
    LL_table[FieldVarMore][DIV] = 97;
    LL_table[FieldVarMore][PLUS] = 97;
    LL_table[FieldVarMore][SUB] = 97;
    LL_table[FieldVarMore][EQ] = 97;
    LL_table[FieldVarMore][LT] = 97;
    LL_table[FieldVarMore][THEN] = 97;
    LL_table[FieldVarMore][ELSE] = 97;
    LL_table[FieldVarMore][FI] = 97;
    LL_table[FieldVarMore][DO] = 97;
    LL_table[FieldVarMore][ENDWH] = 97;
    LL_table[FieldVarMore][RBRACKET] = 97;
    LL_table[FieldVarMore][END] = 97;
    LL_table[FieldVarMore][SEMIC] = 97;
    LL_table[FieldVarMore][COMMA] = 97;
    LL_table[FieldVarMore][LSBRACKET] = 98;
    LL_table[CmpOp][LT] = 99;
    LL_table[CmpOp][EQ] = 100;
    LL_table[AddOp][PLUS] = 101;
    LL_table[AddOp][SUB] = 102;
    LL_table[MultOp][MULT] = 103;
    LL_table[MultOp][DIV] = 104;

}

int covert_to_type(st_token * st)
{
    char * src = st->sem;
    int type = st->lex;
    int ret = 0;
    switch (type) {
    case RESERVED:
        if(strcmp(st->sem,"program"))
        {
            ret = PROGRAM;
        }
        else if(strcmp(st->sem,"procedure"))
        {
            ret = PROCEDURE;
        }
        else if(strcmp(st->sem,"type"))
        {
            ret = TYPE;
        }
        else if(strcmp(st->sem,"var"))
        {
            ret = VAR;
        }
        else if(strcmp(st->sem,"if"))
        {
            ret = IF;
        }
        else if(strcmp(st->sem,"then"))
        {
            ret = THEN;
        }
        else if(strcmp(st->sem,"else"))
        {
            ret = ELSE;
        }
        else if(strcmp(st->sem,"fi"))
        {
            ret = FI;
        }
        else if(strcmp(st->sem,"while"))
        {
            ret = WHILE;
        }
        else if(strcmp(st->sem,"do"))
        {
            ret = DO;
        }
        else if(strcmp(st->sem,"endwh"))
        {
            ret = ENDWH;
        }
        else if(strcmp(st->sem,"begin"))
        {
            ret = BEGIN;
        }
        else if(strcmp(st->sem,"end"))
        {
            ret = END;
        }
        else if(strcmp(st->sem,"read"))
        {
            ret = READ;
        }
        else if(strcmp(st->sem,"write"))
        {
            ret = WRITE;
        }
        else if(strcmp(st->sem,"array"))
        {
            ret = ARRAY;
        }
        else if(strcmp(st->sem,"of"))
        {
            ret = OF;
        }
        else if(strcmp(st->sem,"record"))
        {
            ret = RECORD;
        }
        else if(strcmp(st->sem,"return"))
        {
            ret = RETURN;
        }
        else if(strcmp(st->sem,"integer"))
        {
            ret = INTEGER;
        }
        else if(strcmp(st->sem,"char"))
        {
            ret = CHAR;
        }
        else {
            ret = 0;
        }
        break;
    case DIV_SINGLE:
        char t = st->sem[0];
        switch(t)
        {
            case '(':
                ret = LBRACKET;
            break;
            case ')':
                ret = RBRACKET;
            break;
            case '+':
                ret = PLUS;
            break;
            case '-':
                ret = SUB;
            break;
            case '*':
                ret = MULT;
            break;
            case '/':
                ret = DIV;
            break;
            case '<':
                ret = LT;
            break;
            case '=':
                ret = EQ;
            break;
            case '[':
                ret = LSBRACKET;
            break;
            case ']':
                ret = RSBRACKET;
            break;
            case '.':
                ret = COMMA;
            break;
            case ';':
                ret = SEMIC;
            break;
            default:
                ret = 0;
        }

        break;
    case DIV_DOUBLE:
        ret = ASSIGN;
        break;
    case INID:
    case INTC:
    case NUM:
    case EXP_START:
    case EXP_ENDING:
    case STR_SYMBOL:
    case INRANGE:
    case PROGRAM_END:
    default:
        break;
    }
}
