int main()
{
    int dividendo; 
    int divisor;
    int cociente = 0;
    
    cout << "Ingrese valor del dividendo: ";
    cin >> dividendo;
    
    cout << "Ingrese valor del divisor: ";
    cin >> divisor;

    if (divisor != 0) {
        int resto = dividendo;

        
        while (resto >= divisor) {
            resto = resto - divisor;
            cociente++;
        }

        cout << "Cociente: " << cociente << endl;
        cout << "Resto: " << resto << endl;
    }
    else {
        cout << "DIVISOR 0 INDEFINIDO" << endl;
    }

    return 0;
}