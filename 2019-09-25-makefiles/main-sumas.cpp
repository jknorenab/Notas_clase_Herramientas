#include <cstdio> //Cambio sin efecto, para hacer makefile. Holi ^^
#include <cmath>
// En este programa modularizamos el programa realizado anteriormente para la misma suma pero calculada de diferentes maneras. Para ello declaramos "las maneras", es decir, las funciones, en archivos separados de tipo .h y luego las implementamos en sus respectivos .cpp ; Este archivo en particular es el main, que crea un ejecutable y que además, llama estas funciones asi:

#include "sum1.h"
#include "sum2.h"
#include "sum3.h"

int main(void){
  double S1;
  double S2;
  double S3;
  double delta1;
  double delta2;

  for(int n = 1; n<=10000; ++n){
    S1 = sum1(n);
    S2 = sum2(n);
    S3 = sum3(n);
    delta1 = std:: fabs((S1 - S3)/ S3); //Error relativo de S1 con respecto a S3
    delta2 = std:: fabs((S2 - S3)/ S3); //Error relativo de S1 con respecto a S3
    std:: printf("%10d %24.16e %24.16e %24.16e %24.16e %24.16e\n", n, S1, S2, S3, delta1, delta2);
  }


  return 0;
  
}
