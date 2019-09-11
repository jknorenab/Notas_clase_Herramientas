#include <cstdio>
#include <cmath>
#include <cstdlib>


int main(void){

  double eps;
  double one;
  one = 1.0;
  eps = 1.0;  
  for(int ii=0; ii<1200; ++ii){
    eps /= 2.0;
    one = 1.0 + eps;
    std:: printf("%10d %24.16e %24.16e\n", ii, one, eps);
  } 
  return 0;

}

