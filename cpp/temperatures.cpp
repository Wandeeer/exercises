#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main() {
    
    // Definir variables
     
    // Guardar temperaturas
    vector<float>temperatures;

    float day = 24.0;
    bool end_day = false;
    float temperature = 0.0;
    float check_temp = 4.0;
    float check_end_day = 0.0;
    // Recorrer el dia y tomar temperaturas

    do {
        cout << "\tTomando temperatura... \n\n";
        cin >> temperature;
        temperatures.push_back(temperature);
        temperature = 0.0;
        check_end_day += 4.0;
        check_temp += 4;

        if (check_end_day == 24.0) {
            end_day = false;
            cout << "\tFin del dia :) \n\n";
        } else {
            cout << "Han pasado 4hrs, tomando temperatura... \n";
            cout << "Hora del dia: " << check_temp << ":00hrs" << endl;
        }

    } while((!end_day) && (check_end_day != day));

    float temp_high = temperatures[0];
    float temp_low = temperatures[0];
    float temp_medium = 0.0;
    float accumulated_value = 0.0;



    for(int i = 0; i < temperatures.size(); i++) {
         accumulated_value += temperatures[i];

        if(temperatures[i] > temp_high) {
            temp_high = temperatures[i];
        }

        if(temperatures[i] < temp_low) {
            temp_low = temperatures[i];
        }
    }
    temp_medium = accumulated_value / 10.0;

    // Mostrando las temperaturas Solicitas
    
    cout << "La temperatura mas baja fue: " << temp_low << endl;
    cout << "La temperatura media fue: " << temp_medium << endl;
    cout << "La temperatura mas alta fue: " << temp_high << endl;

    getch();

    return 0;
}
