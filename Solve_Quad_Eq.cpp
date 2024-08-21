#include "Solve_Quad_Eq.h"
#include <math.h>
#include <assert.h>
int Solve_Quad_Eq(double a, double b, double c, double * x1, double * x2){
     double D = b*b - 4*a*c;

     if (isnan(a) || isnan(b) || isnan(c)){

          *x1 = NAN;
          *x2 = NAN;
          return ENT_ERR;


     }
      if (fabs((a-0.0))<ABS_ACC && fabs((b-0.0))<ABS_ACC && fabs((c-0.0))<ABS_ACC ) {

          *x1 = NAN;
          *x2 = NAN;
          return SQE_INFINITE_SOL;

     }
     if (D<0 || (fabs((a-0.0))<ABS_ACC && fabs((b-0.0))<ABS_ACC&& fabs((c-0.0))>ABS_ACC)){

          *x1 = NAN;
          *x2 = NAN;
          return 0;

     }
     if ((D-0.0)<ABS_ACC){
          *x1 = -b/(2*a);
          *x2 = NAN;
          return 1;
     }
     if ((fabs((a-0.0))<ABS_ACC && fabs((b-0.0))>ABS_ACC)){
            *x1 = -c/b;
            *x2 = NAN;
            return 1;
     }

     if (D>0){
          *x1 =  (-b + sqrt(D))/(2*a);
          *x2 = (-b - sqrt(D))/(2*a);

          return 2;
     }
     else{
     *x1 = NAN;
     *x2 = NAN;
     return 52;
     assert(1);
     }
}
