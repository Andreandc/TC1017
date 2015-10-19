#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string x){
        if(x== string(x.rbegin(), x.rend()))
            return true;
      else
    return false;
  }

int main(){
    string a;
    cout << "Escribe una frase, palabra o número que pienses que es Palíndromo/a: " << endl;
    cin>>a;
    bool y= isPalindrome(a);
        if (y == true) {
          cout << "¡Correcto!" << endl;
        }
        else  {
          cout << "¡Incorrecto!" << endl;
        }
    return 0;
}
