#ifndef LL1_H
#define LL1_H
#include "base.h"
#include <string.h>

struct LL_tree
{
    int ll_tree_type;
    char ll_str[256];
    int line_num;
    LL_tree * child = NULL;
    LL_tree * brother = NULL;
};

LL_tree * LL_main(token_list tokens);
void create_ll_table();
void predict(int num);
void priosity(int op);
int is_terminal(st_token * word);

#endif // LL1_H
