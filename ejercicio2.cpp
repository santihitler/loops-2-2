#include <iostream>
using namespace std;
int main(){
string x;
string word;
getline(cin, x);
if ( x.length() > 0 ){
    for ( int i = 0; i<x.length(); i++){
        if ( x[i] != ' ' ){
            word = word + x[i];
        }
            else{
                cout >> "[" << word <<"]"<< endl;
                word = "";
            }
        cout << "[" << word <<"]"<< endl;
        
    }
}
else  
{
  cout << " cadena vacia "<< endl;
}



return 0;
}