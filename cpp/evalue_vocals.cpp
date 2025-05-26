#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Digite una letra: " << endl;
    char letra;
    string vocal_uppercase = "La vocal es mayuscula";
    string vocal_lowercase = "La vocal es miniscula";

    cin >> letra;
    // Evaluar si es o no una vocal

    switch(letra){

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << vocal_lowercase << endl;
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << vocal_uppercase << endl;
            break;
        default:
            cout << "NO es una vocal" << endl;
            break;
    }
    return 0;
}
