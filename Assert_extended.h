#ifndef ASSERT_EXTENDED
#define ASSERT_EXTENDED
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <TXLib.h>
#include <assert.h>
#include "Colour_Output.h"
#ifndef NDEBUG
#define assert_output(e, str, ...) printf("%sERROR: %s%s\n", RED, #e, RESET); assert_extended(e, __FILE__, __LINE__, str, __VA_ARGS__ );
#endif
void assert_extended(bool condition,const char * filename, const int line, const char * string_out, ...);
#endif

