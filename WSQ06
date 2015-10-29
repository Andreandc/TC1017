#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main (){
int numero;
srand (time (NULL));
int x= rand () % 101;
cout<<“I’ll give you a number beteen 0 and 100, guess the number”<<endl;
cin>>numero;
while (numero!=x)
{
if (numero<x)
{
cout<<“Is higher, try again”<<endl;
cin>>numero;
}
if (numero>x)
{
cout<<“Is lower, try again”<<endl;
cin>>numero;
}
}
if(numero=x)
{
cout<<“You guessed the number! :)”<<endl;
}
return 0;
}
