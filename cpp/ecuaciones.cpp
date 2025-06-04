#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    float a, b, c;
    float solution_positive = 0, solution_negative = 0;
    cout << "Ingrese el valor de a : \n";
    cin >> a;
    cout << "Ingrese el valor de b : \n";
    cin >> b;
    cout << "Ingrese el valor de c : \n";
    cin >> c;

    solution_positive = (-b + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);
    solution_negative = (-b - sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);

    cout << "El resultado de su ecuacion en positiva: " << solution_positive << endl;
    cout << "El resultado de su ecuacion en negativa: " << solution_negative << endl;

    return 0;
}
