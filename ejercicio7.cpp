#include <iostream>
using namespace std;
int main()
{
    int n;
    double results = 0.0;
    double signo = 1.0;
    cin >> n;
    
    cout <<" Ingrese valores x > 0" << endl;
   
        for (int i = 1; i<= n; i++){
            results += (1.0 / i) * signo;
            signo = -signo;
        }
        cout << results << endl;
      

    return 0;
    }