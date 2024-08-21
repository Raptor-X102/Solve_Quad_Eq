#include "Solve_Quad_Eq.h"
#include <stdio.h>
#include "Output_Roots.h"
#include <assert.h>
void Output_Roots (double a, double b, double c, double * x1, double * x2){

    switch(Solve_Quad_Eq(a,b,c,x1,x2)){
    case SQE_INFINITE_SOL: printf("Уравнение имеет бесконечное число решений\n");
        break;
    case ENT_ERR: printf("Неверный ввод данных\n");
        while(getchar()!='\n'){
            continue;
        }
        break;
    case 0: printf("Уравнение не имеет действительных решений\n");
        break;
    case 1: printf("Уравнение имеет единственное решение: %.3lg\n", *x1);
        break;
    case 2: printf("Уравнение имеет два решения: %.3lg и %.3lg \n", *x1,*x2);
        break;

    default: assert(1);
    }
}
