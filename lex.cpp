#include "lex_type.h"
#include "lex.h"
#include "string.h"

token_list* get_token(char* src,int length)
{
    int position,line,word_length,row,word_position,state,row_count;
    char word[256],t;
    token_list * ret = new token_list;

    position = 0;
    line = 1;
    word_length = 0;
    word_position = 0;
    row = 0;
    state = 0;
    st_token * st = new st_token;

    while(position < length)
    {
        t = src[position];

        word[word_position] = t;
        position++ ;
        row++ ;

        if(state == 0)
		{
			st = new st_token;
			st->line = line;
            st->row = row;
			st->lex = NONE;
		}

        //if(state != 5 && state != -1)
        //{
            word_position++ ;
        //}

        if(('a'<=t && t<= 'z')||('A'<=t && t<='Z'))
        {
            switch(state)
            {
                case 0: state = 1;
                    break;
                case 1:
                    break;
                case 2:
                    break;
                case 7:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 8:
                    break;
                default:
                    state = -1;
            }
        }
        else if( t == '\n')
		{
            word[word_position-1] = 0;
			switch(state)
			{
                case -1:
                st->lex = LEX_ERROR;
                st->length = 0;
                st->row = row;
                st->line = line;
                strcpy(st->sem,word);
                    break;
                case 0:
                    word_position = 0;
                    line++;
                    row = 0;
                    state = 0;
                    word[0] = 0;
                    continue;
                case 1:
                    if(is_reserved(word))
                    {
                        st->lex = RESERVED;
                    }
                    else
                    {
                        st->lex = INID;
                    }
                    st->length = strlen(word);
                    st->row = row;
                    st->line = line;
                    strcpy(st->sem,word);
                    break;
                case 2:
                    st->lex = NUM;
                    st->length = strlen(word);
                    st->row = row;
                    st->line = line;
                    strcpy(st->sem,word);
                    break;
                default:
                    ;
			}

            ret->push_back(st);
            word_position = 0;
			line++;
			row = 0;
			state = 0;
            word[0] = 0;
		}
        else if('0'<=t && t<= '9')
        {
            switch(state)
            {
                case 0: state = 2;
                    break;
                case 1:
                case 2:
                    break;
                default:
                    state = -1;
            }
        }
        else if(t==':')
        {
            word[word_position-1] = 0;
            switch(state)
            {
                case -1:continue;
                case 0: state = 4;
                case 1:
                    if(is_reserved(word))
                    {
                        st->lex = RESERVED;
                    }
                    else
                    {
                        st->lex = INID;
                    }
                    ret->push_back(st);
                    strcpy(st->sem,word);
                    st->length = strlen(word);
                    break;
                case 2:
                    st->lex = NUM;
                    ret->push_back(st);
                    strcpy(st->sem,word);
                    st->length = strlen(word);
                    break;
                default:
                    state = -1;
                    continue;
            }
            word_position = 1;
            st = new st_token;
            st->line = line;
            word[0] = t;
            word[1] = 0;
            state = 4;
        }
        else if(t=='=')
        {
            switch(state)
            {
                case -1:continue;
                case 0:
					break;
                case 1: state = 0;
                    /*ret->push_back(st);
                    if(is_reserved(word))
                    {
                        st->lex = RESERVED;
                    }
                    else
                    {
                        st->lex = INID;
                    }
                    strcpy(st->sem,word);
                    st->length = strlen(word);
                    word_position = 0;*/
					break;
                case 2: state = 0;
                    /*ret->push_back(st);
                    st->lex = NUM;
                    strcpy(st->sem,word);
                    st->length = strlen(word);
                    word_position = 0;*/
                    break;
                case 4: state = 0;
					ret->push_back(st);
					st->lex = DIV_DOUBLE;
					strcpy(st->sem,word);
                    st->length = strlen(word);
                    word_position = 0;
                    break;
                case 5:break;
                default:
                    state = -1;
                    continue;
            }
        }
        else if(t == '{')
        {
            switch(state)
            {
                case 0: state = 5;
                    break;
            }
        }
        else if(t == '}')
        {
            switch(state)
            {
                case 5: state = 0;
                    break;
                default:
                    state = -1;
            }
        }
        else if(t == '.')
        {
            //word[word_position-1] = 0;
            switch(state)
            {
                case -1:continue;
                case 0: state = 6;
                    break;
                case 1:if(is_reserved(word))
                    {
                        st->lex = RESERVED;
                    }
                    else
                    {
                        st->lex = INID;
                    }
                    word[word_position-1] = 0;
                    ret->push_back(st);
                    strcpy(st->sem,word);
                    st->length = strlen(word);
                    state = 6;
                    st = new st_token;
                    break;
                case 2:
                    st->lex = NUM;
                    ret->push_back(st);
                    strcpy(st->sem,word);
                    st->length = strlen(word);
                    word[word_position-1] = 0;
                    state = 6;
                    st = new st_token;
                    break;
                case 6: state = 0;
					ret->push_back(st);
					st->lex = INRANGE;
                    word[word_position] = 0;
					strcpy(st->sem,word);
                    st->length = strlen(word);
                    word_position = 0;
                    state = 0;
                    break;
                default:
                    state = -1;
            }
            if(state == 6)
            {
                if(src[position] != '.')
                {
                    word[0]='.';
                    word[1]='\0';
                    ret->push_back(st);
                    st->lex = PROGRAM_END;
                    strcpy(st->sem,word);
                    st->length = strlen(word);
                    st->line = line;
                    st->row = row;
                    word_position = 0;
                    state = 0;
                }
            }
        }
        else if(t == '\'')
        {
            switch(state)
            {
                case 0: state = 7;
                    break;
                case 7:
                    st->line = line;
                    st->row = row;
                    ret->push_back(st);
                    st->lex = 1;//##
                    word[word_position-1] = 0;
                    strcpy(st->sem,word);
                    st->length = 1;
                    st = new st_token;
                    state = 0;
                    break;
                default:
                    state = -1;
            }
            st->line = line;
            st->row = row;
            ret->push_back(st);
            st->lex = 1;//##
            word[0] = t;
            word[1] = 0;
            strcpy(st->sem,word);
            st->length = 1;
            word_position = 0;
            if(state == 7)
            {
                st = new st_token;
            }
        }
		else if( t =='+' || t =='-' || t == '*' || t == '/' || t == '(' || t == ')' || t == '['
                || t == ']' || t == '<'  || t == ' ' || t == ';')
        {
            word[word_position-1] = 0;
            switch(state)
            {
                case -1:continue;
                case 1:
                	if(is_reserved(word))
                	{
                		st->lex = RESERVED;
                	}
                	else
					{
						st->lex = INID;
					}
                    break;
                case 2:
                	st->lex = NUM;
                    break;
                case 7:
                    break;
                case 8:
                    break;
            }
            if(word[0] != 0)
            {
                ret->push_back(st);
                strcpy(st->sem,word);
                st->length = strlen(word);
            }
			word_position = 0;
            if(t!=' ')
            {
                st = new st_token;
                st->line = line;
                st->row = row;
                ret->push_back(st);
                st->lex = DIV_SINGLE;
                word[0] = t;
                word[1] = 0;
                strcpy(st->sem,word);
                st->length = strlen(word);
            }
            word_position = 0;
            state = 0;
        }
        else
		{
			st->lex = LEX_ERROR;
            state = -1;
		}
    }

    return ret;
}

int is_reserved(char* src)
{
    int i;
    for(i = 0;i < SNL_RESERVED_NUM;i++){
        if(strcmp(src,SNL_RESERVED[i]) == 0)
        {
            return 1;
        }
    }
    return 0;
}
