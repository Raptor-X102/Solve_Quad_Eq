#include "Testing.h"
/// @brief функция, тестирующая функцию Solve_Quad_Eq().
///
/// @param[in] p_Test_Val указатель на структуру, содержащую значения, необходимые для проверки функции Solve_Quad_Eq().
///
/// @return Целое значение. 1 в случае ошибки, 0 - в противном.
///
/// @note Возвращаемое значение требуется для подсчета ошибок в программе RunSQE.cpp при множественном использовании функции Testing().
int Testing(Test_Val * p_Test_Val){
    Coeff coeff = {.a = p_Test_Val->a, .b = p_Test_Val->b, .c = p_Test_Val->c};
    Solve_Quad_Eq_Res result = Solve_Quad_Eq(coeff);

    if(result.num_of_roots == SOLVE_QUAD_EQ_INFINITE_SOL && result.num_of_roots == p_Test_Val->num_of_rootsEXP){

        return 0;
    }
    if(result.num_of_roots == 0 && result.num_of_roots == p_Test_Val->num_of_rootsEXP){

         return 0;
    }
    if(result.num_of_roots == 1 && result.num_of_roots == p_Test_Val->num_of_rootsEXP
     && F_close_comp(p_Test_Val->x1EXP,result.x1)){

        return 0;
    }
    if((result.num_of_roots == p_Test_Val->num_of_rootsEXP) && ((isnan(result.x1)
    && isnan(p_Test_Val->x1EXP)) || (F_close_comp(result.x1, p_Test_Val->x1EXP)))
    && ((isnan(result.x2) && isnan(p_Test_Val->x2EXP)) || (F_close_comp(result.x2, p_Test_Val->x2EXP)))){

        return 0;
    }

    print_coloured(RED, "ERROR: Test %d\n", p_Test_Val->num_of_test);
    print_coloured(RED, "Inserted: a = %lg, b = %lg, c = %lg, x1 = %lg, x2 = %lg, n_of_r = %d \n",
     p_Test_Val->a, p_Test_Val->b, p_Test_Val->c, result.x1, result.x2, result.num_of_roots);
    print_coloured(RED, "Expected: x1 = %lg, x2 = %lg, n_of_r = %d\n", p_Test_Val->x1EXP, p_Test_Val->x2EXP,
     p_Test_Val->num_of_rootsEXP);
    return 1;

}
