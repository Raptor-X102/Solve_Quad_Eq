#include <stdio.h>
#include <math.h>
#include <TXLib.h>
#include "Switch.h"
              // константа для случая с неверным вводом

int main(){
    double a = NAN,b = NAN,c = NAN, x1 = NAN, x2 = NAN;
    printf("Введите коэффициенты a, b, c квадратного уравнения вида ax^2+bx+c = 0: ");
    int input;
    while((input = scanf("%lf %lf %lf", &a,&b,&c)) != EOF){
             if (input !=3){
                while(getchar()!='\n'){
                   continue;
             }
                printf("Неверный ввод данных\n");
                printf("Введите следующие значения коэффициентов: ");
                continue;
             }


            Switch(a,b,c,&x1,&x2);






        printf("Введите следующие значения коэффициентов: ");

    }

}

