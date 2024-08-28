#ifndef COLOUR_OUTPUT
#define COLOUR_OUTPUT
#include <stdio.h>
#include <io.h>
#include <stdarg.h>
#define RESET "\033[0m"
#define CYAN "\033[1;36m"
#define BLUE "\033[1;34m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define MAJ "\033[1;35m"
void print_coloured(const char * colour,const char * string_out, ...);
#endif
