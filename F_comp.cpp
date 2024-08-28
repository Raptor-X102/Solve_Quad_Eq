#include "F_comp.h"
/// @brief функция, проверяющая близость значений двух переменных типа float.
///
/// @param[in] x значение, которое сравнивается с y.
/// @param [in] y значение, с которым сравнивают параметр x.
///
/// @return значение типа bool. True в случае, если разница значений x и y не превосходит по модулю delta, false - в противном случае.
bool F_close_comp(double x, double y){

    return (fabs(x-y) < delta) ? true: false;

}
