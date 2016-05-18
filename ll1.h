#ifndef LL1_H
#define LL1_H
#include "base.h"

LL_tree_node * LL_main(token_list tokens);
void create_ll_table();
void predict(int num);
void priosity(int op);
int is_terminal(st_LL * word);
int covert_to_type(st_token * st);

#endif // LL1_H
