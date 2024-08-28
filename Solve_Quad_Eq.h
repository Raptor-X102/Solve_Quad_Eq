#ifndef SOLVE_QUAD_EQ
#define SOLVE_QUAD_EQ
#include <math.h>
#include <assert.h>
#include "F_comp.h"
#include "Input.h"
/// @brief структура, содержаща€ значени€ корней квадратного уравнени€ и количества корней
struct Solve_Quad_Eq_Res {
    double x1,x2; ///<  орни квадратного уравнени€
    int num_of_roots; ///<  оличество корней уравнени€
};
/// @brief структура, содержаща€ значени€ корней линейного уравнени€ и количества корней
struct Solve_Linear_Eq_Res {
    double x1; ///<  орень линейного уравнени€
    int num_of_roots; ///<  оличество корней уравнени€
};
Solve_Quad_Eq_Res Solve_Quad_Eq(Coeff coeff);
Solve_Linear_Eq_Res Solve_Linear_Eq(Coeff coeff);
const int SOLVE_QUAD_EQ_INFINITE_SOL = -1;     ///< константа, возвращаема€ функцией Solve_Quad_Eq() в случае бесконечного множеством решений
const int ENT_ERR = -2;                        ///< константа,возвращаема€ функцией Solve_Quad_Eq() в случае неверно введенных параметров.
#endif
