#include "tree.h"

LL_tree_node * create_node()
{
    LL_tree_node *ret = new LL_tree_node;
    return ret;
}

LL_tree_node * create_node(int type,char * str,int line)
{
    LL_tree_node *ret = new LL_tree_node;
    ret->ll_tree_type = type;
    ret->line_num = line;
    strcpy(ret->ll_str,str);
    return ret;
}
