#include <cstdio> //para imprimir
#include <fstream> //para imprimir a archivos
#include <cmath>
#include <cstdlib>
#include <iostream>


int main(void){
  
  std:: ofstream fout("datos.txt"); //exporta el archivo binario a un archivo de texto con la tabla de datos que queremos!!!
  
  //double x = 0.0123; // radianes
  const int N = 100; //iteraciones de la suma

  for(double x = 0.1; x < 8.0; x += 0.1){ // en este primer for calculamos sen(x) para varios x, es decir 0.1 < x < 8.0
    double sum = x; //variable donde guardo la suma
    double term = x; // aquí guardamos los terminos de la suma
    for (int ii = 1; ii < N; ++ii){ // este for calcula el seno para el x dado por el anterior for
      //std::cout << term << "\n";
      term = term*(-1)*x*x/((2*ii)*(2*ii+1));
      sum = sum + term;
    }
    fout << x << "\t " << sum  << "\t" << "\t" << std::sin(x) << "\n";
  }
  fout.close();
  return 0;

}
