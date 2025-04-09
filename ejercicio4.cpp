#include <iostream>
#include <string>
using namespace std;
int main(){
int fact
cin >> fact;
int result = 1;
if ( fact<1){
    cout << "Ingrese un numero mayor a 0" << endl;
}
else if ( fact >14){
    cout << "El numero ingresado es muy grande max 14"  << endl;
}
else if ( fact == 1){
    cout << "1" << endl;
}
else {
    for ( int i = 1; i <= fact; i++){
        result = result * i;
    }
    cout << result << endl;
}
    return 0;
}