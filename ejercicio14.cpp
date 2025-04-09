#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x; 
  string numer1;
  string numer2;
  cout <<" Ingrese el valor de n" << endl;
  cin>>x;
  string palabra = to_string (x);
  
  if (palabra.length()>0)
  {
    for  (int i =0 ; i<palabra.length(); i ++){
    numer1 = numer1 + palabra[i];
    }
    for  (int j =palabra.length() -1 ; j>=0; j --){
        numer2 = numer2 + palabra[j];
    }
    if (numer2== numer1){
        cout << " son palindrome"<< endl;
    
    }
    else {
        cout << " no son palindromes" << endl;
    }
  }
    return 0;
}