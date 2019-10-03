#include "sum2.h"

double sum2(int n){
  double sum1;
  double sum2;
  double suma;

  sum1 = 0.0;
  sum2 = 0.0;
  suma = 0.0;
  
  for(int i = 1; i<=n; ++i){
    sum1 += (2*i-1.0)/(2*i);
    sum2 += (2*i)/(2*i+1.0);    
  }
  suma = -sum1 + sum2;
  return suma;
}
