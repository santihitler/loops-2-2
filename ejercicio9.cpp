#include <iostream>
using namespace std;
int main()
{
    cout << " Ingrese su palabra " << endl;
    string x;
    string word;
    getline(cin, x);
    int f= 0;
    
    
    if (x.length()>0){
        for (int i = 0; i <x.length(); i++){
            if ( x[i] == 'f' ) {
                f = f +1 ;
            }
            if (f ==2){
                cout <<" f esta en la posicion " << i << endl;
                break;
            }
            }
            if (f == 1 && f !=2){
                cout << " -1" << endl;
            }
            else if ( f == 0)
            {
             cout << " -2" << endl;
            }
    }
    else {
        cout << " Entrada invalida " << endl;
        }
    return 0;
}