#include <iostream>
using namespace std;

long n;
long fibonacci (long n){
  long first=0, second=1, third=0;
  if(n==1){
    third=1;
  }

for (int i=0; i<n-1; i++){
  third=first+second;
  first=second;
  second=third;
}
  return third;
}


int main(){
  cout<<"Da un número positivo para la serie Fibonacci: ";
  cin>>n;
    if (n>=0) {
      cout<<"Resultado: "<<fibonacci(n);
    }
    else{
      cout<<"Invalid";
    }
  return 0;
}
