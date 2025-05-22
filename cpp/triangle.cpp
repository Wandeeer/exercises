#include <iostream>
#include <ostream>

using namespace std;

int main() {
  // Declaracion de los ciclos
  int filas = 1;
  int columnas = 5;

  for (int a = 0; a < columnas; a++) {
    for (int b = 0; b < filas; b++) {
      cout << "*";
    }
    cout << "\n";
    filas++;
  }
}
