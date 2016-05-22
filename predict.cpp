#include "predict.h"
#include "tree.h"

void process1(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ProgramHead;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = DeclarePart;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = ProgramBody;
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}

void process2(stack_ll * stack_sys,stack_tree * stack_prg)
{
    st_LL * st_2 = new st_LL;
    st_2->ll_type = PROGRAM;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = ProgramName;
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    LL_tree_node * node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node * new_node = create_node();
    node->child = new_node;
}

void process3(stack_ll * stack_sys,stack_tree * stack_prg,char * str)//r
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ID;
    stack_sys->push(st_1);
    LL_tree_node * node =  stack_prg->top();
    strcpy(node->ll_str,str);
}
void process4(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = TypeDec;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = VarDec;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = ProcDecPart;
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}

void process5(stack_ll * stack_sys)
{
    return;
}

void process6(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = TypeDeclaration;
    stack_sys->push(st_1);
}

void process7(stack_ll * stack_sys,stack_tree * stack_prg)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = TYPE;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = TypeDecList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node * bro_node = create_node();
    LL_tree_node * child_node = create_node();
    node->brother = bro_node;
    node->child =  child_node;
    stack_prg->push(bro_node);
    stack_prg->push(child_node);
}
void process8(stack_ll * stack_sys,stack_tree * stack_prg)//w2
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = TypeId;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = EQ;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = TypeDef;
    st_LL * st_4 = new st_LL;
    st_4->ll_type = SEMIC;
    st_LL * st_5 = new st_LL;
    st_5->ll_type = TypeDecMore;
    stack_sys->push(st_5);
    stack_sys->push(st_4);
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node * bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process9(stack_ll * stack_sys,stack_tree * stack_prg)//unf
{
    stack_prg->pop();
}
void process10(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = TypeDecList;
    stack_sys->push(st_1);
}

void process11(stack_ll * stack_sys,stack_tree * stack_prg,char * str) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ID;
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    strcpy(node->ll_str,str);
}
void process12(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = BaseType;
    stack_sys->push(st_1);
}
void process13(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = StructureType;
    stack_sys->push(st_1);
}
void process14(stack_ll * stack_sys,stack_tree * stack_prg,char * str) //watch out
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ID;
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    node->ll_tree_type = IdK;
    strcpy(node->ll_str,str);
}
void process15(stack_ll * stack_sys,stack_tree * stack_prg) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = INTEGER;
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    node->ll_tree_type = IntegerK;
}
void process16(stack_ll * stack_sys,stack_tree * stack_prg) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = CHAR;
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    node->ll_tree_type = CharK;
}
void process17(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ArrayType;
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    node->ll_tree_type = ArrayK;
}
void process18(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = RecType;
    stack_sys->push(st_1);
}
void process19(stack_ll * stack_sys)//w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ARRAY;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = LSBRACKET;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = Low;
    st_LL * st_4 = new st_LL;
    st_4->ll_type = ;
    st_LL * st_5 = new st_LL;
    st_5->ll_type = Top;
    st_LL * st_6 = new st_LL;
    st_6->ll_type = RSBRACKET;
    st_LL * st_7 = new st_LL;
    st_7->ll_type = OF;
    st_LL * st_8 = new st_LL;
    st_8->ll_type = BaseType;
    stack_sys->push(st_8);
    stack_sys->push(st_7);
    stack_sys->push(st_6);
    stack_sys->push(st_5);
    stack_sys->push(st_4);
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process20(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = INTC;
    stack_sys->push(st_1);
}

void process21(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = INTC;
    stack_sys->push(st_1);
}

void process22(stack_ll * stack_sys,stack_tree * stack_prg,LL_tree_node ** save_pointer)//unf
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = RECORD;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = FieldDecList;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = END;
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    LL_tree_node * bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process23();
void process24(stack_ll * stack_sys,stack_tree * stack_prg)//w2
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ArrayType;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = IdList;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = SEMIC;
    st_LL * st_4 = new st_LL;
    st_4->ll_type = FieldDecMore;
    stack_sys->push(st_4);
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    LL_tree_node * bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process25(stack_ll * stack_sys,stack_tree * stack_prg,LL_tree_node ** save_pointer)//unf
{
    LL_tree_node * node = stack_prg->top();
    *save_pointer = node;
}
void process26(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = FieldDecList;
    stack_sys->push(st_1);
}
void process27(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ID;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = IdMore;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process28(stack_ll * stack_sys)
{
    return;
}

void process29(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = COMMA;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = IdList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process30(stack_ll * stack_sys)
{
    return;
}

void process31(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = VarDeclaration;
    stack_sys->push(st_1);
}
void process32(stack_ll * stack_sys,stack_tree * stack_prg)//w2
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = VAR;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = VarDecList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    LL_tree_node * bro_node = create_node();
    LL_tree_node * child_node = create_node();
    node->brother = bro_node;
    node->brother = child_node;
    stack_prg->push(bro_node);
    stack_prg->push(child_node);
}
void process33(stack_ll * stack_sys,stack_tree * stack_prg)//w2
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = TypeDef;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = VarIdList;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = SEMIC;
    st_LL * st_4 = new st_LL;
    st_4->ll_type = VarDecMore;
    stack_sys->push(st_4);
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    LL_tree_node * bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process34(stack_ll * stack_sys,stack_tree * stack_prg)//unf
{
    stack_prg->pop();
}
void process35(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = VarDecList;
    stack_sys->push(st_1);
}
void process36(stack_ll * stack_sys,stack_tree * stack_prg)//w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = VAR;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = VarDecList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
}
void process37(stack_ll * stack_sys)
{
    return;
}
void process38(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = COMMA;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = VarIdList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process39(stack_ll * stack_sys)
{
    return;
}

void process40(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ProcDeclaration;
    stack_sys->push(st_1);
}

void process41(stack_ll * stack_sys,stack_tree * stack_prg)//w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = PROCEDURE;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = ProcName;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = LBRACKET;
    st_LL * st_4 = new st_LL;
    st_4->ll_type = ParamList;
    st_LL * st_5 = new st_LL;
    st_5->ll_type = RBRACKET;
    st_LL * st_6 = new st_LL;
    st_6->ll_type = ProcDecPart;
    st_LL * st_7 = new st_LL;
    st_7->ll_type = ProcDecPart;
    st_LL * st_8 = new st_LL;
    st_8->ll_type = ProcDecMore;
    stack_sys->push(st_8);
    stack_sys->push(st_7);
    stack_sys->push(st_6);
    stack_sys->push(st_5);
    stack_sys->push(st_4);
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node =  stack_prg->top();
    LL_tree_node * bro1_node = create_node();
    LL_tree_node * child1 = create_node();
    LL_tree_node * child2 = create_node();
    LL_tree_node * child3 = create_node();
    node->brother = bro1_node;
    node->child = child1;
    child1->brother = child2;
    child2->brother = child3;
    stack_prg->push(bro1_node);
    stack_prg->push(child1);
    stack_prg->push(child2);
    stack_prg->push(child3);
}
void process42(stack_ll * stack_sys)
{
    return;
}
void process43(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ProcDeclaration;
    stack_sys->push(st_1);
}
void process44(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ID;
    stack_sys->push(st_1);
}
void process45(stack_ll * stack_sys,stack_tree * stack_prg)//w
{
    stack_prg->pop();
}
void process46(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ProcDeclaration;
    stack_sys->push(st_1);
}
void process47(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = Param;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = ParamMore;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process48(stack_ll * stack_sys,stack_tree * stack_prg,
               LL_tree_node ** save_pointer)//w3
{
    stack_prg->pop();
}

void process49(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = SEMIC;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = ParamDecList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process50(stack_ll * stack_sys,stack_tree * stack_prg) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = TypeDef;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = FormList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node* node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node* bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}

void process51(stack_ll * stack_sys,stack_tree * stack_prg) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = VAR;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = TypeDef;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = FormList;
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node* node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node* bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process52(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ID;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = FidMore;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process53(stack_ll * stack_sys)
{
    return;
}
void process54(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = COMMA;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = FormList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process55(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = DeclarePart;
    stack_sys->push(st_1);
}
void process56(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ProgramBody;
    stack_sys->push(st_1);
}
void process57(stack_ll * stack_sys,stack_tree * stack_prg) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = BEGIN;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = StmList;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = FormList;
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node* node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node* child_node = create_node();
    node->child = child_node;
    stack_prg->push(child_node);
}
void process58(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = Stm;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = StmList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process59(stack_ll * stack_sys,stack_tree * stack_prg)//w
{
    stack_prg->pop();
}
void process60(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = SEMIC;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = StmList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}

void process61(stack_ll * stack_sys,stack_tree * stack_prg) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ConditionalStm;
    stack_sys->push(st_1);
    LL_tree_node* node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node* bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process62(stack_ll * stack_sys,stack_tree * stack_prg) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = LoopStm;
    stack_sys->push(st_1);
    LL_tree_node* node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node* bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process63(stack_ll * stack_sys,stack_tree * stack_prg) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = InputStm;
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node* node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node* bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process64(stack_ll * stack_sys,stack_tree * stack_prg) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = OutputStm;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node* node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node* bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process65(stack_ll * stack_sys,stack_tree * stack_prg) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ReturnStm;
    stack_sys->push(st_1);
    LL_tree_node* node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node* bro_node = create_node();
    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process66(stack_ll * stack_sys,stack_tree * stack_prg) //u
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ID;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = AssCall;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node* node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node* bro_node = create_node();

    node->brother = bro_node;
    stack_prg->push(bro_node);
}
void process67(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = AssignmentRest;
    stack_sys->push(st_1);
}
void process68(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = CallStmRest;
    stack_sys->push(st_1);
}
void process69(stack_ll * stack_sys,stack_tree * stack_prg)//unf
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = VariMore;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = ASSIGN;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = Exp;
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}

void process70(stack_ll * stack_sys,stack_tree * stack_prg)//w2
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = IF;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = RelExp;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = THEN;
    st_LL * st_4 = new st_LL;
    st_4->ll_type = StmList;
    st_LL * st_5 = new st_LL;
    st_5->ll_type = ELSE;
    st_LL * st_6 = new st_LL;
    st_6->ll_type = StmList;
    st_LL * st_7 = new st_LL;
    st_7->ll_type = FI;
    stack_sys->push(st_7);
    stack_sys->push(st_6);
    stack_sys->push(st_5);
    stack_sys->push(st_4);
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    LL_tree_node * child_node = create_node();
    LL_tree_node * bro1_node = create_node();
    LL_tree_node * bro2_node = create_node();
    node->child = child_node;
    child_node->brother = bro1_node;
    bro1_node->brother = bro2_node;
    stack_prg->push(bro2_node);
    stack_prg->push(bro1_node);
    stack_prg->push(child_node);
}

void process71(stack_ll * stack_sys,stack_tree * stack_prg)//w2
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = RelExp;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = THEN;
    st_LL * st_4 = new st_LL;
    st_4->ll_type = StmList;
    st_LL * st_5 = new st_LL;
    st_5->ll_type = ELSE;
    st_LL * st_6 = new st_LL;
    st_6->ll_type = StmList;
    st_LL * st_7 = new st_LL;
    st_7->ll_type = FI;
    stack_sys->push(st_7);
    stack_sys->push(st_6);
    stack_sys->push(st_5);
    stack_sys->push(st_4);
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    LL_tree_node * child_node = create_node();
    LL_tree_node * bro1_node = create_node();
    LL_tree_node * bro2_node = create_node();
    node->child = child_node;
    child_node->brother = bro1_node;
    bro1_node->brother = bro2_node;
    stack_prg->push(bro2_node);
    stack_prg->push(bro1_node);
    stack_prg->push(child_node);
}
void process72(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = READ;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = LBRACKET;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = InVar;
    st_LL * st_4 = new st_LL;
    st_4->ll_type = RBRACKET;
    stack_sys->push(st_4);
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process73(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = SEMIC;
    stack_sys->push(st_1);
}

void process74(stack_ll * stack_sys,stack_tree * stack_prg)//u
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = WRITE;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = LBRACKET;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = Exp;
    st_LL * st_4 = new st_LL;
    st_4->ll_type = RBRACKET;
    stack_sys->push(st_4);
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = stack_prg->top();
    LL_tree_node * child_node = create_node();
    LL_tree_node * bro1_node = create_node();
    LL_tree_node * bro2_node = create_node();
    node->child = child_node;
    child_node->brother = bro1_node;
    bro1_node->brother = bro2_node;
    stack_prg->push(bro2_node);
    stack_prg->push(bro1_node);
    stack_prg->push(child_node);
}
void process75(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = RETURN;
    stack_sys->push(st_1);
}

void process76(stack_ll * stack_sys,stack_tree * stack_prg)//u
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = LBRACKET;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = ActParamList;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = RBRACKET;
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process77();
void process78(stack_ll * stack_sys,stack_tree * stack_prg)//u
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = Exp;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = ActParamMore;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = create_node();
    stack_prg->push(node);
}
void process79(stack_ll * stack_sys)
{
    return;
}

void process80(stack_ll * stack_sys,stack_tree * stack_prg)//u
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ASSIGN;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = ActParamList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
    LL_tree_node * node = create_node();
    stack_prg->push(node);
}

void process81();
void process82();
void process83();
void process84();
void process85();
void process86();
void process87(stack_ll * stack_sys)
{
    return;
}

void process88();
void process89();
void process90();

void process91(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = Variable;
    stack_sys->push(st_1);
}

void process92();
void process93();
void process94();
void process95();
void process96();
void process97();
void process98();
void process99(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = LT;
    stack_sys->push(st_1);
}

void process100(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = EQ;
    stack_sys->push(st_1);
}

void process101(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = PLUS;
    stack_sys->push(st_1);
}
void process102(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = SUB;
    stack_sys->push(st_1);
}
void process103(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = MULT;
    stack_sys->push(st_1);
}
void process104(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = DIV;
    stack_sys->push(st_1);
}
