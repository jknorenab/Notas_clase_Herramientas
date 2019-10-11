#include <iostream>
#include <cmath>


double sin_pade(double x);
double sin_aux(double u);

int main(void)
{
  std::cout.precision(16); // 16 decimal places
  std::cout.setf(std::ios::scientific); // use scientific notation

  
  //Falta hacer la correccion al main. 

 
  return 0;
}

double sin_pade(double x)
{
  x = std::fmod(x, 2*M_PI);
  if(3*M_PI/2 < x and x <= 2*M_PI) x = x -2*M_PI;
  if(M_PI/2 < x and x<= M_PI) x = M_PI - x;

  if(std::fabs(x) < 1.0e-8) return x;
  
  if(std::fabs(x) > M_PI/6){
    double u = x/3;
    double sinu = sin_aux(x);
    return (3 - 4*senu*senu)*senu;
  }
 }

double sin_aux(double u)
{
  const double A1 = 29593.0/207636; //Error tipico, el .0 para que el haga float
  const double A2 = 39911.0/7613320;
  const double A3 = 479249.0/11511339840;
  const double B1 = 1671.0/69212;
  const double B2 = 97.0/351384;
  const double B3 = 2623.0/1644477120;
  
  double aux1 = 0.0;
  double aux2 = 0.0;
  
  aux1 = 1 - A1*u*u + A2 *std::pow(u,4) - A3*std::pow(u,6);
  aux2 = 1 + B1*u*u + B2*std::pow(u,4) + B3*std::pow(u,6);
  return u*(aux1/aux2);
}

