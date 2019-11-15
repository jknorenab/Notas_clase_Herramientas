#include <cstdio>

int main(void){

#pragma omp parallel //comando de preprocesador que carga las instrucciones para paralelizar el programa. Todo lo que escriba debajo de este comando queda paralelizado.
  {
  std:: printf("Hello, world \n");
  }

  return 0;
}
