#include <stdio.h>
#include "Testing.h"
#define RESET "\033[0m"
#define MAJ "\033[1;35m"
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
