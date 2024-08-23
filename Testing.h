#ifndef TESTING
#define TESTING
#include <math.h>
#include "Solve_Quad_Eq.h"
#include <stdio.h>
#include "F_comp.h"
#include "Input.h"
const int SIZE_OF_TEST_PAR = 8;
struct Test_Val {
    int num_of_test;
    double a,b,c;
    double x1EXP, x2EXP;
    int num_of_rootsEXP;
};
int Testing(Test_Val * ptv);
#endif
