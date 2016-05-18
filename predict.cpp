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
void process14();
void process15();
void process16();
void process17();
void process18(stack_ll * stack_sys)
{
    st_LL * st_1 = new st_LL;
    st_1->ll_type = RecType;
    stack_sys->push(st_1);
}
void process19();
void process20();

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
void process27();
void process28();
void process29();
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
void process35();
void process36();
void process37();
void process38();
void process39();
void process40();

void process41();
void process42();
void process43();
void process44();
void process45();
void process46();
void process47();
void process48();
void process49();
void process50();

void process51();
void process52();
void process53();
void process54();
void process55();
void process56();
void process57();
void process58();
void process59();
void process60();

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
void process72();
void process73();
void process74();
void process75();
void process76();
void process77();
void process78();
void process79();
void process80();

void process81();
void process82();
void process83();
void process84();
void process85();
void process86();
void process87();
void process88();
void process89();
void process90();

void process91();
void process92();
void process93();
void process94();
void process95();
void process96();
void process97();
void process98();
void process99();
void process100();

void process101();
void process102();
void process103();
void process104();
