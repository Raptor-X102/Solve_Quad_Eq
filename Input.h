#ifndef INPUT
#define INPUT
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "Colour_Output.h"
/// @brief ���������, ���������� ������������ ��������� ������� �� ����� ������
struct Coeff {

    double a, b, c;
};
bool Input(Coeff * pCoeff, bool * IsEOF);
#endif
