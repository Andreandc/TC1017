#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;

int main(){
  vector <float> lista;
  float numero;
  string seguir = "yes";
  while(seguir == "yes"){
    cout<<"Ingresa un numero: "<<endl;
    cin>>numero;
    lista.push_back(numero);
    cout << "Otro numero? ";
    cin >> seguir;
  }
  float sum;
  float aver;
  float des;
  float var;
  cout<<"Los numeros dados son: ";
  for(float p=0; p<lista.size(); p++)                    //for para la suma
  cout<<lista[p]<<", ";
  cout<<endl;
  cout<<"La suma es: ";
  sum=accumulate(lista.begin(), lista.end(), 0.0);
  cout<<sum<<endl;

  cout<<"El promedio es: ";
  aver=(accumulate(lista.begin(), lista.end(), 0.0))/(lista.size());
  cout<<aver<<endl;

  cout<<"La desviación estándar es: ";
  for(p=0; p<lista.size(); p++)             //for para la desviacion
  var=var+pow((lista[p]-aver), 2);
  des=sqrt((var)/(lista.size()));
  cout<<des<<endl;
  return 0;
}
