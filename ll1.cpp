#include "ll1.h"
#include <stack>

int LL_table[96][96];

LL_tree * LL_main(token_list tokens)
{
    LL_tree * ret;
    int line_no;
    stack<st_token *> sysmbel_stack;

    create_ll_table();
    ret =  create_node();

    while(!sysmbel_stack.empty())
    {
        st_token * sys_pointer = sysmbel_stack.top();
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


}
