#ifndef SOLVE_QUAD_EQ
#define SOLVE_QUAD_EQ
#include "Input.h"
struct Solve_Quad_Eq_Res {
    double x1,x2;
    int num_of_roots;
};
struct Solve_Linear_Eq_Res {
    double x1;
    int num_of_roots;
};
Solve_Quad_Eq_Res Solve_Quad_Eq(Coeff coeff);
Solve_Linear_Eq_Res Solve_Linear_Eq(Coeff coeff);
const double ABS_ACC = 1e-6;
const int SQE_INFINITE_SOL = -1;     // ��������� ��� ������ � ����������� ���������� �������
const int ENT_ERR = -2;              // ��������� ��� ������ � �������� ������
#endif
