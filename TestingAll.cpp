
#include "Testing.h"

int main() {

   int count = Testing(1,1,2,-3,1,-3,2)+ \
               Testing(2,0,0,0,NAN,NAN,SQE_INFINITE_SOL) +\
               Testing(3,1,0,0,0,NAN,1)+\
               Testing(4,0,1,0,0,NAN,1)+\
               Testing(5, 0,0,1,NAN,NAN,0)+\
               Testing(6,1,1,0,0,-1,2)+\
               Testing(7,1,0,1,NAN,NAN,0)+\
               Testing(8,0,1,1,-1,NAN,1);
    printf("Кол-во ошибок: %d", count);



}
