#include <cstdio>
#include "mpi.h"

int main (int argc, char **argv){ //Esto quiere decir que le doy argumentos a la funcion main, le doy argumentos al ejecutable!

  int rank, size;

  //Lo que siempre tiene que estar en un programa MPI

  MPI_Init(&argc, &argv); //Inicializa MPI
  MPI_Comm_size(MPI_COMM_WORLD, &size); // Me dice cual es el tamaño del proceso
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);// Me dice en qué parte del proceso estoy
  printf("Hello from process %d of %d\n", rank, size);
  MPI_Finalize (); //Cierra el MPI

  return 0;
}
