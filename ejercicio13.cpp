#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int result = 0;
   int n;
   int k;
   cout << "ingresar el valor del n y luego k"<< endl;
   cin>> n;
   cin >> k;
   for (int i = 1 ; i<=n ; i++){
       result+= pow(i,k);
   }
   cout << result<< endl;

    return 0;
}