#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int a, b;
    float c = 0;

    cout << "Ingrese cateto a: " << endl;
    cin >> a;
    cout << "Ingrese cateto b: " << endl;
    cin >> b;

    // El numero se multiplica por si mismo, lo mismo a elvarse al cuadrado
    float r = (a * a) + (b * b);
    c = sqrt(r);
    cout << "La hipotenusa es: " << c << endl;

    // Usando pow de cmath
    /*
        c = sqrt(pow(a, 2) + (b, 2));
    */

    return 0;
}