//Este es un cpp que corre la función del encabezado que creamos en sum1.h, anteriormente, para ello igual debemos incluir la función, como sigue
#include "sum1.h"

double sum1(int n){
  double suma;
  double sign;

  suma = 0.0; // Si es una variable tipo double o float, es mejor inicializarla de esta manera, si la iniciamos con 0 solito podría haber un error en el calculo, pues el asume que sería una variable de tipo entero
  sign = -1.0;
  for(int i = 1; i<=2*n; ++i){
    suma += sign*i/(i+1);
    sign *= -1; //truco para evitar poner la funcion pow para el signo
  }
  return suma;
}
