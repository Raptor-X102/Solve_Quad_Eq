#include "F_comp.h"
bool F_close_comp(double x, double y){

    return (fabs(x-y) < delta) ? true: false;

}
