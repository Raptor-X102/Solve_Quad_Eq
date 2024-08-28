#include <stdlib.h>
#include <stdio.h>
#include <TXLib.h>
#include <math.h>
#include "Testing.h"
#include "Output_Roots.h"
#include "Colour_Output.h"
#define TEST_CONDITION 1
#if TEST_CONDITION

int main(){
    Coeff coeff = {.a = NAN, .b = NAN, .c = NAN};
    bool isEOF = false;
    print_coloured(CYAN, "Введите коэффициенты a, b, c квадратного уравнения вида ax^2+bx+c = 0: ");
    while(Input(&coeff,&isEOF)) {
        Solve_Quad_Eq_Res result = {.x1 = NAN, .x2 = NAN, .num_of_roots = 0};
        result = Solve_Quad_Eq(coeff);
        Output_Roots(result);
        if(isEOF){
            print_coloured(BLUE, "The end.");
            break;
        }
        print_coloured(CYAN, "Введите следующие значения коэффициентов: ");

    }
    print_coloured(BLUE, "The end.");

}
#else
int main() {

    FILE * pFile = fopen("Testing_Values.txt", "r");
    Test_Val test_par = { };
    int count = 0;
    for(int i = 0; i < SIZE_OF_TEST_PAR; i++){

        fscanf(pFile, "%d",&(test_par.num_of_test));
        fscanf(pFile, "%lf",&(test_par.a));
        fscanf(pFile, "%lf",&(test_par.b));
        fscanf(pFile, "%lf",&(test_par.c));
        fscanf(pFile, "%lf",&(test_par.x1EXP));
        fscanf(pFile, "%lf",&(test_par.x2EXP));
        fscanf(pFile, "%d",&(test_par.num_of_rootsEXP));
        count += Testing(&test_par);
}

    print_coloured(MAJ, "Кол-во ошибок: %d", count);
}

#endif


