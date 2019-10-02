#include <cstdio>
#include <cmath>

typedef double REAL;

//En este programa calcularemos de diferentes maneras las raices de un polinomio cuadrático, según las diapositivas del curso, de tal manera que evitemos la substracción cancelativa.

// truco typedef float REAL; Cada vez que vea la palabra REAL la cambiará por double, (en este caso), aunque puede ser float, lo que queramos!

// Al correr el programa, vemos que basta con 10 pasos (en variables tipo float) y con 18 pasos (en variables tipo double),para que alguna de las raices de x1 o x2 se vuelva infinita. Esto nos permite concluir que la mejor forma de obtener las raices de un polinomio cuadrático es con la forma x1m y x2p ^^

int main (void){
  REAL b;
  REAL a;
  REAL c;
  int n;
  REAL det;
  REAL x1p = 0, x1m = 0, x2p = 0, x2m = 0;
  

  a = 1;
  b = 1;
  c = 0;
  n = 0;
  
  //El for debe empezar desde 1, puesto que si empieza desde cero; el determinante queda indefinido porque se vuelve imaginario.
  for(n = 1; n<=18; ++n){ 
    c = std:: pow(10.0,-n); //Definimos este c para verificar las diferencias entre los resultados de las raíces del polinomio, a medida que vamos cambiandolo= haciendolo más pequeño.
    det = std:: sqrt(b*b-4*a*c); // lo que está dentro de la raíz, en la formula cuadrática; lo escribimos para mayor facilidad.
    x1p = (-b + det)/(2*a);
    x1m = (-b - det)/(2*a);
    x2p = (-2*c)/(b + det);
    x2m = (-2*c)/(b - det);
    std :: printf("%10d %10.6f %10.6f %10.6f %10.6f\n", n, x1p, x1m, x2p, x2m);
  }

  return 0;
}
