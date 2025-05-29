#include <iostream>
// #include <vector>
#include <stdlib.h>
using namespace std;

int main() {

    int x, y, accumulated = 1; 

    /*  
     *   int res = 0;
     *   int result = 0;
     *   int accumulated = 0;
     *   bool first_result = false;
    */

    cout << "Digite un numero y su exponete a calcular: \n";
    cout << "Numero: \n";
    cin >> x;
    cout << "Exponente: \n";
    cin >> y;
    
    // vector<int>nums;
    cout << "Calculando potencia... \n";
    /**
     * Primer Solucion :v
     *
     * for(int i = 1; i < y; i++) {
        if(!first_result) {
            res = x * x; 
            nums.push_back(res);
            first_result = true;
        } else {
            accumulated = x * nums[0]; 
            nums[0] = accumulated;
        }    
    }

    * Es mucho codigo fue lo primera solucion que encontre...
    *
    *
    * Segunda Solucion
    *
    * if(!first_result) {
    *       res = x * x; 
    *       first_result = true;
    * } else {
    *       acumulated = x * res;
    *       res = accumulated;
    * }
    *
    * Y por ultimo y tercera solucion
    * igual detro del bucle for
    *
    * res = accumulated * x;
    * accumulated = res;
    *
    * Esto ya nada mas era prueba y error ;)
    */

    for(int i = 0; i < y; i++){
        if ((x > 0) && (y >= 0)) {
            accumulated *= x; // Ya por ultimo esta era la manera correcta, ya la vi en internet.
        } else {
            cout << "Numeros invalidos... \n";
        }
    }

    /* cout << "Su resulta es: " << nums[0] << endl; # Primer solucion
    * cout << "Su resulta es: " << res << endl; # Segunda solucion 
    * cout << "Su resulta es: " << res << endl; # Tercera solucion 
    */

    cout << "Su resultado es: " << accumulated << endl; // Cuarta solucion
 
    system("pause");

    return 0;
}
