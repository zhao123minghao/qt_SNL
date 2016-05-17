#include "file_operation.h"
#include <cstdio>
#include <string>

using namespace std;
const char * file_input(char * filename)
{
    const char *ret;
    char t;
    string r;
    FILE * _file = fopen(filename,"r");

    r = "\0";
    while ((t = fgetc(_file)) != -1) {
        r += t;
    }
    fclose(_file);
    ret = r.c_str();
    return ret;
}
