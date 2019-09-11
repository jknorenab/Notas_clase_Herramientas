#include <cstdio>
#include <cmath>
#include <cstdlib>


int main(void){

  float eps;
  float one;
  one = 1.0;
  eps = 1.0;  
  for(int ii=0; ii<1000; ++ii){
    eps /= 2.0;
    one = 1.0 + eps;
    std:: printf("%10d %15.6e %15.6e\n", ii, one, eps);
  } 
  return 0;

}
