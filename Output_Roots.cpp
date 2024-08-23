#include "Solve_Quad_Eq.h"
#include <stdio.h>
#include "Output_Roots.h"
#include "Clear_buf.h"
#include <assert.h>
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define YELLOW  "\033[1;33m"
#define WHITE   "\033[1;37m"
#define GREEN   "\033[1;32m"

void Output_Roots (Solve_Quad_Eq_Res result){

    switch(result.num_of_roots){
    case SQE_INFINITE_SOL: printf("%s��������� ����� ����������� ����� �������%s\n",GREEN, RESET);
        break;
    case 0: printf("%s��������� �� ����� �������������� �������%s\n", GREEN, RESET);
        break;
    case 1: printf("%s��������� ����� ������������ �������: %.3lg%s\n", GREEN, result.x1, RESET);
        break;
    case 2: printf("%s��������� ����� ��� �������: %.3lg � %.3lg %s\n", GREEN, result.x1, result.x2, RESET);
        break;

    default:
        assert("������" && 0);
    }
}
