#include <iostream>
using namespace std;

long n;
long fibonacci (long n){
  long a=0, b=1, c=0;
  if(n==1){
    c=1;
  }

for (int i=0; i<n-1; i++)
{
  c=a+b;
  a=b;
  b=c;
}
  return c;
}

int main(){
  cout<<"Da un número positivo para la serie Fibonacci: ";
  cin>>n;
    if (n>=0)
    {
      cout<<"Resultado: "<<fibonacci(n);
    }
    else
    {
      cout<<"Invalid";
    }
  return 0;
}
