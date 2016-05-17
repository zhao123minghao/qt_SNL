#ifndef LEX_H_INCLUDED
#define LEX_H_INCLUDED

#include "base.h"

token_list* get_token(char* src,int length);
int is_reserved(char* src);

#endif // LEX_H_INCLUDED
