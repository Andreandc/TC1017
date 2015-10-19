#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  int a, b, c, s=0;
  cout<<"De el rango"<<endl;
  cout<<"Primer numero:"<<endl;
  cin>>a;
  cout<<"Segundo numero"<<endl;
  cin>>b;
  c=b-a+1;
  while (a<=b)
  {s=s+a;
  a++;}
  cout<<"La suma es:"<<s<<endl;
}
