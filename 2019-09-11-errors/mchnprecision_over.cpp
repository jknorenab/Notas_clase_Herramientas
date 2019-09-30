#include <cstdio> // para imprimir con printf
#include <cmath>
#include <cstdlib>
// En este programa le pedimos al computador, con un simple código, que nos muestre hasta qué punto es capaz de diferenciar un número muy grande de otro. Así, le decimos al programa que sume una variable (eps) que se hace cada vez más grande; a una constante (one)  por cada paso del loop (1000). Le pedimos, entonces que imprima el paso, la suma y la variable grande. El resultado es un underflow ene^(+38)  que es cuando el computador deja  de reconocer la variable eps y por tanto deja one, quieta. Por su parte, para variables double, tenemos overflow en   e^(307). 

int main(void){

  double eps;
  double one;
  one = 1.0;
  eps = 1.0;  
  for(int ii=0; ii<12000; ++ii){
    eps *= 2.0;
    one = 1.0 + eps;
    std:: printf("%10d %15.6e %15.6e\n", ii, one, eps); // % d, e me dicen qué tipo de variable voy a imprimir; %10, 15 me dice los espacios que quiero guardarle a mi variable a imprimir. .# es la precision en decimales que quiero que use.
  } 
  return 0;

}
