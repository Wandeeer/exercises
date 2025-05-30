#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n, res, sum, expression; 

    cout << "Ingrese un numero para calcular la suma de sus impares: \n";
    cin >> n;

    for(int i = 1; i <= 2 * n - 1; i = i + 2) {
        // expression = 2 * i - 1;
        sum = sum + i;

        cout << "El " << i << " resultado es: " << sum << endl;;
}

    //res = pow(n, 2);
    cout << "El resultado de su operacion es: " << sum << endl;

    return 0;
}
