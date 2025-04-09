#include <iostream>
using namespace std;
int main(){
string x;
getline(cin, x);
if ( x.length() > 0 ){
    for ( int i = 0; i<x.length(); i++){
        if ( x[i] == ' ' ){
            cout <<i << endl;
        }
            cout << to_string(x.length())<< endl;
        }
    }
else  
{
  cout << " cadena vacia "<< endl;
}



return 0;
}