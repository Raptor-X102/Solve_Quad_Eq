#include "Input.h"

/// @brief Функция осуществляющая ввод коэффициентов a, b, c для функции Solve_Quad_Eq().
///
/// @param[in] pCoeff указатель на структуру Coeff, принимающую значения параметров a, b, c.
/// @param[in] isEOF указатель на переменную типа bool, отвечающую за конец программы при считывании EOF.
///
/// @return значение типа bool
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
            print_coloured(RED, "Неверный ввод данных\n");
            print_coloured(RED, "Введите следующие значения коэффициентов: ");
            continue;
        }

        if (input == 3){

            return true;
        }

    }

    return false;
}
