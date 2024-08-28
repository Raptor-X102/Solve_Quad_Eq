#ifndef TESTING
#define TESTING
#include <stdio.h>
#include <math.h>
#include "Solve_Quad_Eq.h"
#include "F_comp.h"
#include "Input.h"
#include "Colour_Output.h"
const int SIZE_OF_TEST_PAR = 8; ///< ���������, ����������� ����� ���������� ������ ��� ����� ������� Solve_Quad_Eq().
/// @brief ���������, ���������� ��������, ����������� � ����� ������� Solve_Quad_Eq()
struct Test_Val {
    int num_of_test; ///< ����� �����
    double a,b,c; ///< ������������ ��������� ���� ax^2+bx+c = 0
    double x1EXP, x2EXP; ///< �������� ������ ���������, ������� ��������� ��� ������������� ������� Solve_Quad_Eq()
    int num_of_rootsEXP;///< �������� ���������� ������ ���������, ������� ��������� ��� ������������� ������� Solve_Quad_Eq()
};
int Testing(Test_Val * p_Test_Val);
#endif
