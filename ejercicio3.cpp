#include <iostream>
#include <string>
using namespace std;
int main(){
 cout << "Ingrese sus numeros "<< endl;
 string x;
 string word;
 getline ( cin x);
 if ( x.length()== 10){
    for (int i = 0; i < x.length(); i++){
        if ( x[i] == '1' ){
            cout << "OM - om- nom :P" << endl;
        }
        else{
            cout << " no cake D:"<< endl;
            break; 
        }
    }
 }
 else{
    cout "Ingrese bien los datos (10)"<< endl;
 }
return 0;
}