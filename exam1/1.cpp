#include <iostream>
#include <cmath>


double sin_pade(double x);
double sin_aux(double u);

int main(void)
{
  std::cout.precision(16); // 16 decimal places
  std::cout.setf(std::ios::scientific); // use scientific notation

  const double xmin = 0.01;
  const double xmax = 2*M_PI;
  const double dx = 0.01;
  const int NSTEPS = (xmax - xmin)/dx;

  double pade = 0.0;
  double exact = 0.0;
  double error = 0.0;

  for(int ii = 0; ii<=NSTEPS; ++ii){
    double x = xmin + ii*dx;
    pade = sin_pade(x);
    exact = sin(x);
    error = (exact - pade)/exact;
    std::cout << x << pade << "\n";
  }

  return 0;
}

double sin_pade(double x)
{
  double eps = 0.0;
  eps = std::pow(10,-8);
  double lim = M_PI/6;
  double u = 0.0;

  if(std::abs(x) < eps){
    return x;
  }
  if(std::abs(x) > lim){
    double seno = 0.0;
    u = x/3;
    seno = sin_aux(u);
    return (3 - 4*seno*seno)*seno;
  }
  if(std::abs(x) < lim){
    double seno = 0.0;
    u = x;
    seno = sin_aux(u);
    return seno;
  }
 }

double sin_aux(double u)
{
  double aux1 = 0.0;
  double aux2 = 0.0;
  
  aux1 = 1 - (29593/207636)*u*u +(39911/7613320)*std::pow(u,4) - (479249/11511339840)*std::pow(u,6);
  aux2 = 1 + (1671/69212)*u*u +(97/351384)*std::pow(u,4) + (2623/1644477120)*std::pow(u,6);
  return u*(aux1/aux2);
}
