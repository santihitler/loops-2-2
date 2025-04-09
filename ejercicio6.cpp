#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int result = 0;
    if ( x<1){
        cout << " Numero invalido solo positivos y mayores a 1" << endl;
    }
    else {
        while (x>0){
            result = result + x%10;
            x = x/10;
        }
        cout << result << endl;
    }
    return 0;
}