#include <iostream>
#include <cstdlib>
#include <cmath>

//Cual es el error? No existe ningun error, el warning me dice que tengo algunas variables que pueden no estar siendo utilizadas, esto es para evitar que tenga variables innecesarias,sin embargo este programa sí esta utilizando(pues los está llenando) los arrays pero como no los leemos (imprimimos o usamos el valor de algun elemento), él nos manda un aviso. ^^  

int main(void)
{
  const int N = 10; //si le ponemos 100mil,el sanitizer me detiene la compilacion y me arroja un SIGSEGV señal de segmentation for,es decir que se acabó la memoria disponible del computador. Pero él no está usando toda la ram; y por lo tanto pasando a la memoria del disco duro (swap). Lo que está pasando, es que la memoria ram se divide en dos partes START,para guardar arreglos estáticos como estos, y HYPE, para guardar arreglos dinamicos como vector. START es más pequeña que la otra, por tanto un arreglo de 100mil ya nos sobrepasa su capacidad. La mejor forma es usar arreglos diinamicos para tener una capacidad mayor.
  double data[N] = {0.0};
  double data2d[N][N] = {{0.0}};

  for(int ii = 0; ii < N; ++ii) {
    data[ii] = std::sin(ii);
  }

  for(int ii = 0; ii < N; ++ii) {
    for(int jj = 0; jj < N; ++jj) {
      data2d[ii][jj] = std::sin(ii)*std::cos(jj);
    } 
  }

  return EXIT_SUCCESS;
}
