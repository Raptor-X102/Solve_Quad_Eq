#include <stdlib.h>
#define RESET "\033[0m"
#define CYAN "\033[1;36m"
#define BLUE "\033[1;34m"
#define RED "\033[1;31m"
#define MAJ "\033[1;35m"
#include <stdio.h>
#include <math.h>
#include "Testing.h"
#include <TXLib.h>
#include "Solve_Quad_Eq.h"
#include "Output_Roots.h"
#include "Input.h"
#define CONDITION 0
#if CONDITION

int main(){
    Coeff coeff = {.a = NAN, .b = NAN, .c = NAN};
    bool isEOF = false;
    printf("%sВведите коэффициенты a, b, c квадратного уравнения вида ax^2+bx+c = 0: %s", CYAN, RESET);

        while(Input(&coeff,&isEOF)) {
            Solve_Quad_Eq_Res result = {.x1 = NAN, .x2 = NAN, .num_of_roots = 0};
            result = Solve_Quad_Eq(coeff);
            Output_Roots(result);
            if(isEOF){
                printf("%sThe end.%s", BLUE, RESET);
                break;
            }
            printf("%sВведите следующие значения коэффициентов: %s", CYAN, RESET);

        }
    printf("%sThe end.%s", BLUE, RESET);


}
#else
int main() {

    FILE * pFile = fopen("Testing_Values.txt", "r");

    Test_Val Test_Par = { };
    int count = 0;
    for(int i = 0; i < SIZE_OF_TEST_PAR; i++){

        fscanf(pFile, "%d",&(Test_Par.num_of_test));
        fscanf(pFile, "%lf",&(Test_Par.a));
        fscanf(pFile, "%lf",&(Test_Par.b));
        fscanf(pFile, "%lf",&(Test_Par.c));
        fscanf(pFile, "%lf",&(Test_Par.x1EXP));
        fscanf(pFile, "%lf",&(Test_Par.x2EXP));
        fscanf(pFile, "%d",&(Test_Par.num_of_rootsEXP));
        count += Testing(&Test_Par);
}

    printf("%sКол-во ошибок: %d%s", MAJ, count, RESET);

}

#endif


