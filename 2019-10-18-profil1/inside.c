#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "inside.h"

void inside(){

  const int n = 256;
  clock_t cputime1, cputime2;
  float ***a;
  int i,j,k;

  a = malloc(n*sizeof(float **));
  for (i=0; i<n; i++){
    a[i] = malloc(n*sizeof(float*));
    for (j=0; j<n; j++)
      a[i][j] = malloc(n*sizeof(float));
  }

  
  cputime1 = clock();
  for (k=0; k<n; ++k)
    for (j=0; j<n; ++j)
      for (i=0; i<n; ++i)
        a[i][j][k] = 1.0;
  cputime2=clock() - cputime1;
  printf("Time with fast index inside: %lf\n", ((double)cputime2)/CLOCKS_PER_SEC);

}
