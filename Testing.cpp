#include "Testing.h"
#define RESET "\033[0m"
#define RED "\033[1;31m"
int Testing(Test_Val * ptv){
    Coeff coeff = {.a = ptv->a, .b = ptv->b, .c = ptv->c};
    Solve_Quad_Eq_Res result = Solve_Quad_Eq(coeff);

    if(result.num_of_roots == SQE_INFINITE_SOL && result.num_of_roots == ptv->num_of_rootsEXP){

        return 0;
    }
    if(result.num_of_roots == 0 && result.num_of_roots == ptv->num_of_rootsEXP){
         return 0;
    }
    if(result.num_of_roots == 1 && result.num_of_roots == ptv->num_of_rootsEXP && F_close_comp(ptv->x1EXP,result.x1)){

        return 0;
    }
    if((result.num_of_roots == ptv->num_of_rootsEXP) && ((isnan(result.x1) && isnan(ptv->x1EXP)) || (F_close_comp(result.x1, ptv->x1EXP))) && ((isnan(result.x2) && isnan(ptv->x2EXP)) || (F_close_comp(result.x2, ptv->x2EXP)))){
        return 0;
    }

    printf("%sERROR: Test %d\n%s", RED, ptv->num_of_test, RESET);
    printf("%sInserted: a = %lg, b = %lg, c = %lg, x1 = %lg, x2 = %lg, n_of_r = %d \n%s", RED, ptv->a, ptv->b, ptv->c, result.x1, result.x2, result.num_of_roots, RESET);
    printf("%sExpected: x1 = %lg, x2 = %lg, n_of_r = %d\n%s", RED, ptv->x1EXP, ptv->x2EXP, ptv->num_of_rootsEXP, RESET);
    return 1;

}
