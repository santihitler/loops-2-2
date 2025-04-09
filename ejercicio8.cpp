#include <iostream>
using namespace std;
int main()
{
string x;
string word;
string word2;
getline(cin, x); 

if (x.length() >0 )
{
    for ( int i = 0; i < x.length(); i++)
    {
    word +=  x[i];
    }
    for ( int j = x.length()-1 ; j>= 0 ;j= j - 1)
    {
        word2 +=  x[j];
    }
    if (word2 == word){
        cout << "yes"<< endl;
    
    }
    else {
        cout << "NO";
    }
    }
else 
{
    cout << " 0 es invalido"<< endl;
}
    return 0;
}