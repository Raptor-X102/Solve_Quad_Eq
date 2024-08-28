#include "Input.h"

/// @brief ������� �������������� ���� ������������� a, b, c ��� ������� Solve_Quad_Eq().
///
/// @param[in] pCoeff ��������� �� ��������� Coeff, ����������� �������� ���������� a, b, c.
/// @param[in] isEOF ��������� �� ���������� ���� bool, ���������� �� ����� ��������� ��� ���������� EOF.
///
/// @return �������� ���� bool
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
            print_coloured(RED, "�������� ���� ������\n");
            print_coloured(RED, "������� ��������� �������� �������������: ");
            continue;
        }

        if (input == 3){

            return true;
        }

    }

    return false;
}
