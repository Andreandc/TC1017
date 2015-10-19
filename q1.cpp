#include <iostream>
using namespace std;

long superpower (long a, long b){
  long superpower=1;
  for (long i=1; i<=b; ++i)
  superpower= superpower*a;
  return superpower;
}

int main(){
  long base;
  long potencia;
  cout<<"Ingrese la base:";
  cin>>base;
  cout<<"Ingrese la potencia:";
  cin>>potencia;
  cout<<"El resultado es:"<<superpower(base, potencia)<<endl;
  return 0;
}
