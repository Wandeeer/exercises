#include <iostream>

using namespace std;

int main() {
    
    cout << "Ingrese un numero: " << endl;

    int number = 0;
    cin >> number;
    if (0 > number) {
        cout << "number is negative" << endl;
    } else {
        cout << "number es positive" << endl;
    }

    return 0;
}
