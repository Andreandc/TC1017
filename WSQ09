#include <iostream>
using namespace std;

int factorial (int s){
  int fact=1;
  if(s==0){
    return 0;}       //si el valor dado es '0' me regresará el valor de 0
  else{
    for(int i=1; i<=s; i++){    //ciclo for: inicia en 1(porque con 0 daría todo 0) y va hasta el numero ingresado aumentando de 1
    fact=i*fact;               //cada numero dado por el for se irá multiplicando por el anterior(se iran generando los valores de 1 al
  }                            //número ingresado)
  return fact;
}
}

int main(){
  int x, y, n;
  char a;
  cout<<"Enter a positive integer to make it factorial:";
  cin>>x;

  if (x<0){cout<<"That is not positive, try again:";
  cin>>x;}

  if (x>=0){cout<<"The factorial of the number is:"<<factorial(x)<<endl;}

  cout<<"You want to try again? (y/n)";
  cin>>a;

 if (a =='y'){
    return 0;
  }
  else {
    cout<<"Thank you for playing, have a nice day!"<<endl;
  }
  return 0;
}
