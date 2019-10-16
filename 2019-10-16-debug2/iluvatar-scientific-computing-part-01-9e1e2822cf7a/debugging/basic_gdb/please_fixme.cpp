#include <iostream>
#include <cstdlib>
#include <cmath>

int foo(int a, int b);
int bar(int a, int b);
double baz(double x);

int main (int argc, char **argv)
{
  int ii, jj;
  ii =  0;
  jj = -1;
  foo(ii, jj);
  foo(jj, ii);
  
  baz(25.9);

  return EXIT_SUCCESS;
}

int foo(int a, int b)
{
  if(a == 0 or b==0){
    //std::cout <<"Division por cero" <<"\n"; Ponemos un aviso,que sea mas informativo!!!
    return 0;
  }
  return a/b + b/bar(a, b) + b/a;
}

int bar(int a, int b)
{
  //unsigned int c = a;//error grave,le estamos asignando una variable a otra que por defecto no tiene signo. Esto podría ocasionar un overflow por el otro lado.
  int c = a;
  return c + a - b;
}

double baz(double x)
{
  if(x == 0){ //truco para comparar : 0 == x, por si se me olvida poner doble igual,entonces estariamos asignando 0=x un numero a cualquier cosa, lo que me arrojaria un error desde compilacion ahorrando tiempo
    return 0;
  }
  double v = 1-(x+1);
  return std::sqrt(v); //Debemos poner -v,porque de otra forma nos da una raiz negativa
}
