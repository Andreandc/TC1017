#include "BigIntegerLibrary.hh"
#include <iostream>
#include <string>
using namespace std;


BigInteger factorial (BigInteger n){
  if (n < 0){
    return -1;
  }
  if (n==0){
    return 1;
  }
  else {
    return n*factorial(n-1);
  }
}
int main(){
  string x;
  do{
    string z;
    cout << "Dame un numero" << endl;
    cin >> z;
    BigInteger y = stringToBigInteger(z);
    cout << factorial(y) << endl;
    cout << "Quieres intentar con otro número?"<< endl;
    cin >> x;
  } while(x == "yes");
  if (x == "no"){
    cout << " Thank you, have a great day! " << endl;
  }
  return 0;
}
