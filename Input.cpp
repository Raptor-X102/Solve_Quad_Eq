#include "Input.h"
#include <stdio.h>
#include <stdlib.h>
#define RESET "\033[0m"
#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
bool Input(Coeff * pCoeff, bool * isEOF){
    *isEOF = false;
    for(int input = 0, isnDigit = 0; (input = scanf("%lf %lf %lf", &(pCoeff->a),&(pCoeff->b),&(pCoeff->c)))!= EOF;){
        isnDigit = 0;
        for(int ch = 0; (ch = getchar()) !='\n';){
            if (ch == EOF) {

                *isEOF = true;
                break;
            }
            if(!isdigit(ch) && !isspace(ch) && ch != '-' && ch != '+'){

                isnDigit = 1;
            }
        }
        if (input < 3 or isnDigit){
            printf("%sНеверный ввод данных%s\n",RED, RESET);
            printf("%sВведите следующие значения коэффициентов: %s", RED, RESET);

            continue;
        }
        if (input == 3){
            return true;
        }

    }

    return false;
}
