#include "Solve_Quad_Eq.h"

/// @brief Функция, решающая линейное уравнения
///
/// @param[in] coeff параметр, передающий коэффициенты уравнения типа bx + c = 0.
///
/// @return структуру типа Solve_Linear_Eq_Res
Solve_Linear_Eq_Res Solve_Linear_Eq(Coeff coeff){
    Solve_Linear_Eq_Res result = { .x1 = NAN, .num_of_roots = 0 };
    if (F_close_comp(coeff.b, 0.0)){

        if (F_close_comp(coeff.c, 0.0)){

            result.num_of_roots = SOLVE_QUAD_EQ_INFINITE_SOL;
            return result;
        }

        result.num_of_roots = 0;
        return result;
    }

    result.x1 = -coeff.c/coeff.b;
    result.num_of_roots = 1;
    return result;
}
/// @brief Функция, решающая квадратное уравнения
///
/// @param [in] coeff параметр, передающий коэффициенты уравнения типа ax^2 + bx + c = 0.
///
/// @return структуру типа Solve_Quad_Eq_Res
Solve_Quad_Eq_Res Solve_Quad_Eq(Coeff coeff){
    Solve_Quad_Eq_Res result = { .x1 = NAN, .x2 = NAN, .num_of_roots = 0 };

    double D = coeff.b*coeff.b - 4*coeff.a*coeff.c;

    if (isnan(coeff.a) || isnan(coeff.b) || isnan(coeff.c)){

        result.num_of_roots = ENT_ERR;
        return result;
    }
    if (D<0){

        result.num_of_roots = 0;
        return result;
    }
    double S_D = sqrt(D);

    if (F_close_comp(coeff.a, 0.0)) {
        Solve_Linear_Eq_Res result_Solve_Linear_Eq = Solve_Linear_Eq(coeff);
        result.x1 = result_Solve_Linear_Eq.x1;
        result.num_of_roots = result_Solve_Linear_Eq.num_of_roots;
        return result;
    }

    if (F_close_comp(D, 0.0)){

        result.x1 = -coeff.b/(2*coeff.a);
        result.num_of_roots = 1;
        return result;
    }

    result.x1 =  (-coeff.b + S_D)/(2*coeff.a);
    result.x2 = (-coeff.b - S_D)/(2*coeff.a);
    double temp = result.x1;
    result.x1 = result.x1 > result.x2 ? result.x1: result.x2;
    result.x2 = temp < result.x2 ? temp: result.x2;
    result.num_of_roots = 2;
    return result;
}
