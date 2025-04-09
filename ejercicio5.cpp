#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 

    int dia = 1;

   
    for (int i = 1; i < n; i++) {
        cout << "   "; 
    }

   
    while (dia <= k) {
       
        if (dia < 10) {
          cout << " " << dia << " ";}
        else 
          {cout << dia << " ";}

       
        if ((n - 1 + dia) % 7 == 0){
            cout << endl;
        }
        dia++;
    }

    cout << endl;
    return 0;
}