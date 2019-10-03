#include <cstdio> //Cambio sin efecto, para hacer makefile. Holi ^^
#include <cmath>
// En este programa calcularemos de diferentes formas la misma suma y veremos   cómo cambia el resultado de cada una, dados los errores numéricos que se pueden  cometer como substracción cancelativa, o errores de uderflow o overflow.En este sentido, estudiamos el valor relativo con respecto a una (S3) que consideramos exacta, y vemos las diferencias a través de las gráficas.

//Así definimos unas funciones que calcularán la misma suma pero de diferentes   maneras, para un N dado
double sum1(int n);
double sum2(int n);
double sum3(int n);


int main(void){
  double S1;
  double S2;
  double S3;
  double delta1;
  double delta2;

  // No es necesario inicializar las variables como aquí, pues más adelante les vamos a dar un valor en términos de cosas que el programa ya conoce. Si no fuera así, sería NECESARIO E IMPRESCINDIBLE inicializarlas.

  S1 = 0;
  S2 = 0;
  S3 = 0;
  delta1 = 0;
  delta2 = 0;

  for(int n = 1; n<=10000; ++n){
    S1 = sum1(n);
    S2 = sum2(n);
    S3 = sum3(n);
    //Suponiendo que S3 es exacta calculamos el error  relativo de S2 y S1 con respecto a S3, como sigue
    delta1 = std:: fabs((S1 - S3)/ S3); //Error relativo de S1 con respecto a S3
    delta2 = std:: fabs((S2 - S3)/ S3); //Error relativo de S1 con respecto a S3
    std:: printf("%10d %24.16e %24.16e %24.16e %24.16e %24.16e\n", n, S1, S2, S3, delta1, delta2);
  }


  return 0;
  
}

double sum3(int n){
  double suma;

  suma = 0.0;
  for(int i = 1; i<=n; ++i){
    suma += 1.0/((2*i)*(2*i + 1));
  }
    return suma;
}

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

