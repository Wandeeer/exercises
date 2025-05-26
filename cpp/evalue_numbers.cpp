#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int a, b, c, d;
    cout << "Digite 3 numeros: " << endl;
    cin >> a >> b >> c;
    cout << "Ingrese un 4 numero a comparar: " << endl;
    cin >> d;
    
    // Deteniedo el tiempo :)
    this_thread::sleep_for(chrono::milliseconds(100));
    cout << "Comparando numeros... " << endl;

    if((d == a) || (d == b) ||(d == c)) {

        cout << "Un numero a coincidido con: " << d << endl;
        
    } else {
        cout << "Ningun numero coincide con: " << d << endl;
    }

    return 0;
}
