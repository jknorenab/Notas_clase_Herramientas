#include "sum3.h"

double sum3(int n){
  double suma;

  suma = 0.0;
  for(int i = 1; i<=n; ++i){
    suma += 1.0/((2*i)*(2*i + 1));
  }
    return suma;
}
