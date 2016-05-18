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

void process2(stack_ll * stack_sys,stack_tree * stack_prg,int line_num)
{
    st_LL * st_2 = new st_LL;
    st_2->ll_type = PROGRAM;
    st_LL * st_3 = new st_LL;
    st_3->ll_type = ProgramName;
    stack_sys->push(st_3);
    stack_sys->push(st_2);
    LL_tree_node * node = stack_prg->top();
    stack_prg->pop();
    LL_tree_node * new_node = create_node(ProgramHead,"",line_num);
    node->child = new_node;
}

void process3(stack_ll * stack_sys)// watch out
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ID;
    stack_sys->push(st_1);
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

void process7(stack_ll * stack_sys,stack_tree * stack_prg,int line_num)//unf
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = TYPE;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = TypeDecList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process8();
void process9();
void process10(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = TypeDecList;
    stack_sys->push(st_1);
}

void process11();
void process12();
void process13(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = StructureType;
    stack_sys->push(st_1);
}
void process14(stack_ll * stack_sys) //watch out
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ID;
    stack_sys->push(st_1);
}
void process15(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = INTEGER;
    stack_sys->push(st_1);
}
void process16(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = CHAR;
    stack_sys->push(st_1);
}
void process17(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = ArrayType;
    stack_sys->push(st_1);
}
void process18(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = RecType;
    stack_sys->push(st_1);
}
void process19();
void process20(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = INTC;
    stack_sys->push(st_1);
}

void process21();
void process22();
void process23();
void process24();
void process25();
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
void process32();
void process33();
void process34();
void process35(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = VarDecList;
    stack_sys->push(st_1);
}
void process36();
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

void process41();
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
void process45();
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
void process48();
void process49(stack_ll * stack_sys) //w
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = SEMIC;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = ParamDecList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process50();

void process51();
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
void process57();
void process58(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = Stm;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = StmList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}
void process59();
void process60(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = SEMIC;
    st_LL * st_2 = new st_LL;
    st_2->ll_type = StmList;
    stack_sys->push(st_2);
    stack_sys->push(st_1);
}

void process61();
void process62();
void process63();
void process64();
void process65();
void process66();
void process67();
void process68();
void process69();
void process70();

void process71();
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

void process74();
void process75(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = RETURN;
    stack_sys->push(st_1);
}

void process76();
void process77();
void process78();
void process79(stack_ll * stack_sys)
{
    return;
}

void process80();

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
