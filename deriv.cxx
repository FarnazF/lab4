#include <iostream>
#include <cmath>

using namespace std;


void print(double* p, const int N, const double dx,
           const double xmin)
{
   for(int i=0; i<N; i++)
       cout << i*dx + xmin << "\t" << p[i] << endl;
}

void fillaray(double* p, const int N, const double dx, const double xmin){
    for(int i=0; i < N; i++){
      double x = i*dx + xmin;
      p[i] = exp(-x*x);
    }
}
void deriv(double* p,const int N,const double dx){
  double q;
  double s;
  p[0]=p[1]/(2*dx);
  p[N-1]=-p[N-2]/(2*dx);
  
  for(int i=1; i<N; i++){
   
    
    q=p[i];
   
    p[i]=(p[i+1]-s)/(2*dx);
    s=q;
    
    
  }
  
}


int main(){
  const int N = 256;
  double p[N];
  const double xmax = 15;
  const double xmin = -15;
  const double dx = (xmax-xmin)/(N-1);
  

  // call to function which fills array p here
  fillaray(p,N,dx,xmin);
  deriv(p,N,dx);
  // call to functio which calculates the derivative
  print(p,N,dx,xmin);
  

  
 

  return 0;
}
