#include "Output_Roots.h"

/// @brief �������, ��������� ��������� ������ ������� Solve_Quad_Eq().
///
/// @param[in] result ��������� � ������������ ��������� ������� Solve_Quad_Eq().
void Output_Roots (Solve_Quad_Eq_Res result){

    switch(result.num_of_roots){
    case SOLVE_QUAD_EQ_INFINITE_SOL: printf(GREEN, "��������� ����� ����������� ����� �������\n");
        break;
    case 0: print_coloured(GREEN, "��������� �� ����� �������������� �������\n");
        break;
    case 1: print_coloured(GREEN, "��������� ����� ������������ �������: %.3lg\n", result.x1);
        break;
    case 2: print_coloured(GREEN, "��������� ����� ��� �������: %.3lg � %.3lg \n", result.x1, result.x2);
        break;

    default:
        assert("Unexpected returning value" && 0);
    }
}
