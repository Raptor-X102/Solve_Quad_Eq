const double ABS_ACC = 1e-6;
const int SQE_INFINITE_SOL = -1;     // константа для случая с бесконечным множеством решений
const int ENT_ERR = -2;


int Solve_Quad_Eq(double a, double b, double c, double * x1, double * x2){
     double D = b*b - 4*a*c;

     if (isnan(a) || isnan(b) || isnan(c)){

          return ENT_ERR;

     }
      if (fabs((a-0.0))<ABS_ACC && fabs((b-0.0))<ABS_ACC && fabs((c-0.0))<ABS_ACC ) {

          return SQE_INFINITE_SOL;

     }
     if (D<0){

          return 0;

     }
     if ((D-0.0)<ABS_ACC){
          *x1 = -b/2/a;

          return 1;
     }
     if (D>0){
          *x1 =  (-b + sqrt(D))/(2*a);
          *x2 = (-b - sqrt(D))/(2*a);

          return 2;
     }
}
