#ifndef INPUT
#define INPUT
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "Colour_Output.h"
/// @brief структура, содержащая коэффициенты уравнений степени не более второй
struct Coeff {

    double a, b, c;
};
bool Input(Coeff * pCoeff, bool * IsEOF);
#endif
