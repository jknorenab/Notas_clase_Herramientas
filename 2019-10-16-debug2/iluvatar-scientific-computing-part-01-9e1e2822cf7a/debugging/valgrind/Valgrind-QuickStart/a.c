#include <stdlib.h>

void f(void)
{
  int* x = malloc(10 * sizeof(int));
  x[9] = 0;        // problem 1: heap block overrun Se arregla poniendo un indice v�lido.
  free(x);
}                    // problem 2: memory leak -- x not freed Provoca da�os en el sistema, pues ha escrito cosas directamente en el disco duro, y hasta que nolo libere, va a estar muert�simo

int main(void)
{
  f();
  return 0;
}
