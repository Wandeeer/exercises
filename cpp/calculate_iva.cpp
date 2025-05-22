#include <iostream>

using namespace std;

int main()
{
    cout << "Ingrese el precio que desea calcular" << endl;
    int price = 0;
    double IVA = 1.21; // IVA = 21%
    cin >> price;

    // Calcular el IVA
    double result = price * IVA;
    double iva_amount = result - price;
    cout << "Su producto mas IVA inluido es: " << result << endl;
    cout << "Importe del IVA: " << iva_amount << endl;

    return 0;
}