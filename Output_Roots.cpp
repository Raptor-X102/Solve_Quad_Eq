#include "Output_Roots.h"

/// @brief функция, выводящая результат работы функции Solve_Quad_Eq().
///
/// @param[in] result структура с возвращаемым значением функции Solve_Quad_Eq().
void Output_Roots (Solve_Quad_Eq_Res result){

    switch(result.num_of_roots){
    case SOLVE_QUAD_EQ_INFINITE_SOL: printf(GREEN, "Уравнение имеет бесконечное число решений\n");
        break;
    case 0: print_coloured(GREEN, "Уравнение не имеет действительных решений\n");
        break;
    case 1: print_coloured(GREEN, "Уравнение имеет единственное решение: %.3lg\n", result.x1);
        break;
    case 2: print_coloured(GREEN, "Уравнение имеет два решения: %.3lg и %.3lg \n", result.x1, result.x2);
        break;

    default:
        assert("Unexpected returning value" && 0);
    }
}
