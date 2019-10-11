#include <iostream>
#include <cstdlib> 

int main(int argc, char **argv) //Se le pasan argumentos a mi main (ver foto adicional)
{
  // declare variables
  const int N = 10;
  double * array; //declaramos un apuntador a algo de tipo double ver audio para más explicación!

  //reserve memory
  array = new double [N]; //reservo un espacio de memoria para el arreglo 
  // initialise array
  for (int ii = 0; ii < N; ++ii) {
    array[ii] = 2*(++ii); // != 2*(ii++) ? 
  }
  // print some values 
  int idx = 2;
  std::cout << array[idx] << std::endl;
  idx = 10;
  std::cout << array[idx] << std::endl; // compiles, but ... 

  // free memory
  delete [] array; //fuga de memoria = Pido memoria pero nunca la devuelvo, si comento esta línea ^^ 

  return EXIT_SUCCESS;
}
