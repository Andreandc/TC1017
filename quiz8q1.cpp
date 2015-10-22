#include <iostream>
#include <vector>              
using namespace std;

int sumSquares_list(vector<int>lista){    
  int result=0;                         
  for(int i=0; i<lista.size(); i++){     
    result= result+lista[i]*lista[i];   
  }                                      
  return result;
}

int main(){
  vector <int>list;        
  int numero;            
  cout<<"Da numeros para elevarlos al cuadrado y sumarlos, al terminar ingresa 0: "<<endl;
  cin>>numero;            
while (numero !=0){
  list.push_back(numero);    
  cin>>numero;             
}
  cout<<"El resultado es: "<<sumSquares_list(list)<<endl;   
  return 0;
}
