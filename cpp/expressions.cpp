#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Ingrese los numeros a comparar,  separar los numero con un espacio: \n";
    cin >> a >> b >> c;
    cout << endl;

    // Metodo 1

    if (a > b && a > c)
    {
        cout << a << " es mayor que: " << b << " y " << c << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " es mayor que: " << a << " y " << c << endl;
    }
    else
    {
        cout << c << " es mayor que: " << a << " y " << b << endl;
    }

    return 0;
}
