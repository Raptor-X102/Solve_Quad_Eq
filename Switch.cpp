#include "Solve_Quad_Eq.h"

void Switch (double a, double b, double c, double * x1, double * x2){


    switch(Solve_Quad_Eq(a,b,c,x1,x2)){
                     case SQE_INFINITE_SOL: printf("��������� ����� ����������� ����� �������\n");
                                            break;
                     case ENT_ERR:          printf("�������� ���� ������\n");
                                            while(getchar()!='\n'){
                                                continue;
                                            }
                                            break;
                     case 0:                printf("��������� �� ����� �������������� �������\n");
                                            break;
                     case 1:                printf("��������� ����� ������������ �������: %.3lg\n", x1);
                                            break;
                     case 2:                printf("��������� ����� ��� �������: %.3lg � %.3lg \n", x1,x2);
                                            break;


                }
}
