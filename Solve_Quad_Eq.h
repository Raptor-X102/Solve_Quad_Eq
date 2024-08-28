#ifndef SOLVE_QUAD_EQ
#define SOLVE_QUAD_EQ
#include <math.h>
#include <assert.h>
#include "F_comp.h"
#include "Input.h"
/// @brief ���������, ���������� �������� ������ ����������� ��������� � ���������� ������
struct Solve_Quad_Eq_Res {
    double x1,x2; ///< ����� ����������� ���������
    int num_of_roots; ///< ���������� ������ ���������
};
/// @brief ���������, ���������� �������� ������ ��������� ��������� � ���������� ������
struct Solve_Linear_Eq_Res {
    double x1; ///< ������ ��������� ���������
    int num_of_roots; ///< ���������� ������ ���������
};
Solve_Quad_Eq_Res Solve_Quad_Eq(Coeff coeff);
Solve_Linear_Eq_Res Solve_Linear_Eq(Coeff coeff);
const int SOLVE_QUAD_EQ_INFINITE_SOL = -1;     ///< ���������, ������������ �������� Solve_Quad_Eq() � ������ ������������ ���������� �������
const int ENT_ERR = -2;                        ///< ���������,������������ �������� Solve_Quad_Eq() � ������ ������� ��������� ����������.
#endif
