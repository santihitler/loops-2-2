#include <iostream>
 using namespace std;
int main()
{
 int dividendo; 
 int divisor;
 int cociente = 0;
 cout <<" Ingrese valor del dividendo: ";
 cin >> dividendo;
 cout << " Ingrese valor del divisor: ";
 cin >> divisor;
 int resultado= 0;
 if (divisor != 0){
    for (int i = 0;dividendo >=0; i++){
        dividendo = dividendo - divisor; 
     resultado += i;  
     
    }
    cociente +=dividendo +divisor;
    cout << resultado << endl;
    cout << cociente<< endl;
 }
 else 
cout << " DIVISR 0 INDEFINIDO"<<  endl;
 

    return 0;
}