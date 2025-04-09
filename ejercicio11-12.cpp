#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 10;
    long double Un = 1.0; // U0
    long double Vn = Un;  // V0 = U0

    cout << fixed << setprecision(8);
    cout << "U0 = " << Un << "   V0 = " << Vn << endl;

    for (int n = 1; n <= N; n++) {
        Un = Un / (n);  
        Vn += Un;
        cout << "U" << n << " = " << Un << "   V" << n << " = " << Vn << endl;
    }

    return 0;
}