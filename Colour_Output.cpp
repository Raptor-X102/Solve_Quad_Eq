#include "Colour_Output.h"

void print_coloured(const char * colour,const char * string_out, ...){
    va_list valist;
    va_start(valist, string_out);
    if( _isatty( _fileno( stdout ) ) ){
        printf("%s", colour);
        vprintf (string_out, valist);
        printf("%s", RESET);
    }
    else{
        vprintf (string_out, valist);
    }
    va_end(valist);
}
