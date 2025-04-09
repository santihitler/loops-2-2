#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número decimal "<< endl;
    cin >> numero;

    string binario ;

    if (numero == 0) {
        binario = "0";
    }

    while (numero > 0) {
        int residuo = numero % 2;
        binario = to_string(residuo) + binario;
        numero = numero / 2;
    }

    cout << "El número en binario es: " << binario << endl;
    return 0;
}