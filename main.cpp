#include <iostream>
#include <string.h>
#include "lex.h"
#include "file_operation.h"

using namespace std;

int main(int argc, char *argv[])
{
    const char * t = file_input("/home/zhaomh/test_lex.snl");
    char src[1024];
    strcpy(src,t);
    int length = strlen(src);
    token_list* token = get_token(src,length);
    token_iterator iterator;
    printf("sem\tline\tlex\tlen\trow\n\n\0");
    for(iterator = token->begin();iterator != token->end();iterator++)
    {
        st_token* each_token = *iterator;
        printf("%s\t%d\t%d\t%d\t%d%s",each_token->sem,each_token->line,each_token->lex,
               each_token->length,each_token->row,"\n");
    }
    return 0;
}
