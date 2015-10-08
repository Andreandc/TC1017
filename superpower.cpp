#include <iostream>
using namespace std;

long elevar (long b, long p){
  long resultado=1;
  for (long i=1; i<=p; ++i)
  resultado= resultado*b;
  return resultado;
}

int main(){
  long base=3;
  long potencia=4;
  cout<<elevar(base, potencia)<<endl;
  return 0;
}
