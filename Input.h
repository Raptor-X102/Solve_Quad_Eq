#ifndef INPUT
#define INPUT
#include <ctype.h>
struct Coeff {

    double a, b, c;
};
bool Input(Coeff * pCoeff, bool * IsEOF);
#endif
