#ifndef SOLVE_QUAD_EQ
#define SOLVE_QUAD_EQ
int Solve_Quad_Eq(double a, double b, double c, double * x1, double * x2);
const double ABS_ACC = 1e-6;
const int SQE_INFINITE_SOL = -1;     // ��������� ��� ������ � ����������� ���������� �������
const int ENT_ERR = -2;              // ��������� ��� ������ � �������� ������
#endif
