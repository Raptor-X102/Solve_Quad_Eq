#include "Testing.h"
int Testing(int n_of_t, double a, double b, double c, double x1EXP, double x2EXP, int n_of_rEXP){
    double x1 = 0, x2 = 0;
    int n_of_r = Solve_Quad_Eq(a,b,c,&x1,&x2);
    if (n_of_r != n_of_rEXP || (x1 - x1EXP)>ABS_ACC || (x2 - x2EXP)>ABS_ACC || (isnan(x1) && !isnan(x1EXP)) || (isnan(x2) && !isnan(x2EXP))){

        printf("ERROR: Test %d\n", n_of_t);
        printf("Inserted: a = %lg, b = %lg, c = %lg, x1 = %lg, x2 = %lg, n_of_r = %d \n", a,b,c,x1,x2,n_of_r);
        printf("Expected: x1 = %lg, x2 = %lg, n_of_r = %d\n", x1EXP, x2EXP, n_of_rEXP);
        return 1;
    }
    return 0;
}
