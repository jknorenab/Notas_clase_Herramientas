#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

int isprime(int a);
int sumprimes(int imin, int imax);
double primo(int x);
  


int main(void){
int suma;
int z;

z = 0;
suma = 0;

for(int i= 50; i<=100; ++i){
  z = primo(i);
  if(z == 0){
  suma = suma;
  }
  if(z==1){
  suma +=i; 
  }
}
cout<<suma<<endl;

/* printf("isprime(%d) = %d\n", 7, isprime(7));
   printf()

*/ 

  return 0;
}
/*int isprime(int a)
{
 for (int ii=2; ii< a/2; ++i){
   if(a%ii==0) return 0;
   }
 return 1;
}
int sumprimes(int imin, int imax)
{
    int sum = 0;
    for(int ii= imin; ii<= imax; ++ii){
    if(isprime(ii))
    sum +=ii;
    }
    return sum;
}
*/

 double primo(int x){
 int resto;
 int d;
 int contador;

 resto = 1;
 d = 2;
 contador = 0;

 while(resto !=0){
   resto = x%d;
   if(resto==0){
     if (d==x){
     contador = 1;
     }
     if(d!=x){
     contador = 0;
     }
   }
   d+=1;
}

return contador;
}



