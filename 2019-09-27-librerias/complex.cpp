#include <complex>
#include <cstdio>
#include <iostream>

int main(void){

  std :: complex<double> z;    // declaramos el complejo donde el template <> nos dice que se especialice en doubles.
  z.real(2.3);
  z.imag(-9.8); //Una forma de declarar el complejo
  std:: complex <double> z2{-2,6}; // otra forma de declarar el complejo
  std :: cout << z << "\n";
  std :: cout << z2 << "\n";
  std :: cout << z2+z << "\n";
  std :: cout << z2*z << "\n";
  std :: cout << z/z2 << "\n";
  std :: cout << z2 << "\n";    

    


  return 0;

}
