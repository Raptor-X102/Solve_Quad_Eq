#include <stdio.h>
#include <math.h>
#include <TXLib.h>
#include "Switch.h"
              // ��������� ��� ������ � �������� ������

int main(){
    double a = NAN,b = NAN,c = NAN, x1 = NAN, x2 = NAN;
    printf("������� ������������ a, b, c ����������� ��������� ���� ax^2+bx+c = 0: ");
    int input;
    while((input = scanf("%lf %lf %lf", &a,&b,&c)) != EOF){
             if (input !=3){
                while(getchar()!='\n'){
                   continue;
             }
                printf("�������� ���� ������\n");
                printf("������� ��������� �������� �������������: ");
                continue;
             }


            Switch(a,b,c,&x1,&x2);






        printf("������� ��������� �������� �������������: ");

    }

}

