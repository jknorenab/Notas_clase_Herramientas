#include <cmath>
#include <cstdio> // de donde sale printf y asi imprimir con notacion cientifica

int main(void){

  const double xmin = 0.0;
  const double xmax = 20.0;
  const double dx = 0.1; // intervalo de salto de los pasos
  const int NSTEPS = (xmax -xmin)/dx;

  for(int ii = 0; ii<=NSTEPS; ++ii){
    double x = xmin + ii*dx;
    std :: printf("%25.16e \t %25.16e\n", x, std::cyl_bessel_i(1,x));
  }
  /*
  for(double x = 0; x<= xmax; x+0.1){ no hacemos este para evitar errores
    x = 

  }
  */
  
  return 0;
}
