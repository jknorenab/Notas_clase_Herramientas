#include <cstdio>
#include <cmath>

float sum1(float n);
float sum2(float n);
float sum3(float n);


int main(void){
  float S1;
  float S2;
  float S3;
  float delta1;
  float delta2;

  S1 = 0;
  S2 = 0;
  S3 = 0;
  delta1 = 0;
  delta2 = 0;

  for(int n = 1; n<=1000; ++n){
    S1 = sum1(n);
    S2 = sum2(n);
    S3 = sum3(n);
    delta1 = std:: abs();

  }


  return 0;
  
}

float sum3(float n){
  float suma;

  suma = 0;
  for(int i = 1; i<=n; ++i){
    suma += 1.0/((2*i)*(2*i + 1));
    return suma;
  }
}

float sum2(float n){
  float sum1;
  float sum2;
  float suma;

  sum1 = 0;
  sum2 = 0;
  suma = sum1 + sum2;
  
  for(int i = 1; i<=n; ++i){
    sum1 -= (2.0*i-1)/(2*i);
    sum2 += (2.0*i)/(2*i+1);
    suma += sum1+sum2;    
  }
  return suma;
}

float sum1(float n){
  float suma;
  float sign;

  suma = 0;
  sign = -1.0;
  for(int i = 1; i<=n; ++i){
    suma += sign*i/(i+1);
    sign *= -1.0; //truco para evitar poner la funcion pow para el signo
  }
  return suma;
}

