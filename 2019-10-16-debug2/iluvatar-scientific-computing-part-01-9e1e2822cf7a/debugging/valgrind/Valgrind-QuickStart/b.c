#include <stdio.h>

int main()
{
  int x = 25;
  printf ("x = %d\n", x);


  int i = 12, j = 0;
  int a[10] = {0}; // b[10]={1}; //Lo quitamos porque no se está usando efectivamente en el programa
  for ( i = 0; i < 10; i++){
    j += a[i];
  }
  if ( j == 77 ){ 
    printf("hello there\n");
  }
  return 0;

}
