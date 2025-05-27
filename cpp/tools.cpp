#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    int option, number; 
    float cube_number;

    cout << endl;
    cout << "----- Kit of tools -----" << endl;
    cout << endl;
    cout << "Select an option: " << endl;
    cout << "1: Cube an number \n2: Even or odd \n3: Exit \n";
    cin >> option;
    
    switch(option) {
        case 1:
            cout << "Enter a number: " << endl;
            cin >> number;
            cube_number = pow(number, 3);
            cout << "Cube number is: " << cube_number << endl;
            break;
        case 2:
            cout << "Enter a number: " << endl;
            cin >> number;
            if(number %2 == 0){
                cout << "Number even :)";
            } else {
                cout << "Number odd... :(";
            }
            break;
        case 3:
            break;
        default:
            cout << "Invalid option... \n";
            break;
    }

    return 0;
}
