#include <iostream>
using namespace std;

int main() {
    int v0, vf;
    cout << "Ingresar valor inicial (v0): ";
    cin >> v0;

    cout << "Ingresar valor final (vf): ";
    cin >> vf;

    if (v0 > vf) {
        cout << "El valor inicial debe ser menor o igual al final." << endl;
        return 0;
    }

    for (int i = v0; i <= vf; i++) {
        int x = i;
        int pasos = 0;

        while (x != 0) {
            if (x % 3 == 0) {
                x += 4;
            } else if (x % 4 == 0) {
                x /= 2;
            } else {
                x -= 1;
            }
            pasos++;
        }

        cout << i << " -> " << pasos << endl;
    }

    return 0;
}