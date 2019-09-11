#include <cstdio> //para imprimir
#include <fstream> //para imprimir a archivos
#include <cmath>
#include <cstdlib>


int main(void){
  
  std:: ofstream fout("datos.txt");
  
  double x = 0.23;
  const int N = 100; //iteraciones de la suma

  for(x = 0.1; x < 8.0; x += 0.1){
  double sum = x; //variable donde guardo la suma
  double term = x; 
  for (int ii = 2; ii < N; ++ii){
    term = term*(-1)*x*x/((2*ii)*(2*ii+1));
    sum += term;
  }
  fout << x << "\t" << term << "t" << "t" << std::sin(x) << "\n";
  }
  fout.close();
  return 0;

}
