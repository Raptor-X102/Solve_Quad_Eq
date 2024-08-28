#include "Assert_extended.h"

void assert_extended(bool condition,const char * filename, const int line, const char * string_out, ...){
    if(!condition){

        va_list args;
        va_start(args, string_out);
        printf("%s", RED);
        vprintf (string_out, args);
        printf("%s",RESET);
        print_coloured(YELLOW,"File: %s\nLine: %d", filename, line);
        abort();
        va_end (args);
    }
}
