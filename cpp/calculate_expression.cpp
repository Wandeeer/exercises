#include <iostream>
using namespace std;

int main()
{

    float a, b, c, d, result = 0;
    cout << "Ingrese el valor de a: \n";
    cin >> a;
    cout << "Ingrese el valor de b: \n";
    cin >> b;
    cout << "Ingrese el valor de c: \n";
    cin >> c;
    cout << "Ingrese el valor de d: \n";
    cin >> d;

    result = a + (b / (c - d));
    ;
    cout << "El resultado de su operacion es: " << result << endl;

    return 0;
}