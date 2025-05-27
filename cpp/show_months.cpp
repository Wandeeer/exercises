#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    int number;
    vector<string>months = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    cout << "Enter a number: " << endl;
    cin >> number;

    int index = 0;
    for(int i = 0; i < months.size(); i++) {
        index++;
        if ((number >= 1) && (number == index)) {
            cout << "This month is: " << months[i] << endl;
        } else {
            cout << "Invalid number.." << endl;
        }

    }

    // METHOD SWITCH

    /* switch(number){

        case 1:
            cout << "Is: " << months[0] << endl; 
            break;
        case 2:
            cout << "Is: " << months[1] << endl; 
            break;
        case 3:
            cout << "Is: " << months[2] << endl; 
            break;
        case 4:
            cout << "Is: " << months[3] << endl; 
            break;
        case 5:
            cout << "Is: " << months[4] << endl; 
            break;
        case 6:
            cout << "Is: " << months[5] << endl; 
            break;
        case 7:
            cout << "Is: " << months[6] << endl; 
            break;
        case 8:
            cout << "Is: " << months[7] << endl; 
            break; 
        case 9:
            cout << "Is: " << months[8] << endl; 
            break;
        case 10:
            cout << "Is: " << months[9] << endl; 
            break;
        case 11:
            cout << "Is: " << months[10] << endl; 
            break;
        case 12:
            cout << "Is: " << months[11] << endl; 
            break;
        default:
            cout << "Invalid number..." << endl;
            break; 
    } */
    return 0;
}
