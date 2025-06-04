#include <iostream>
#include <vector>

using namespace std;
int rows = 20;
int cols = 20;
//int matrix[20][20] = {0};
vector<vector<int>> matrix(rows, vector<int>(cols, 0));


struct Pice {
  int position[2];
  int shape[2][2];
  int size;
};

int index_y = 0;
int index_x = 0;
void solidify_pice() {

  // Creating a pice

  Pice pice_cube;

  pice_cube.shape[0][0] = 1;
  pice_cube.shape[0][1] = 1;

  pice_cube.shape[1][0] = 1;
  pice_cube.shape[1][1] = 1;

  pice_cube.position[0] = 5;
  pice_cube.position[1] = 5;

  pice_cube.size = 2;

  for(int i = 0; i < pice_cube.size; i++) {
    index_y = i;
    for(int j = 0; j < pice_cube.size; j++) {
      index_x = j;
      if (pice_cube.shape[i][j] == 1) {
        int y = index_y + pice_cube.position[0];
        int x = index_x + pice_cube.position[1];
        matrix[y][x] = 1;
      }
    }
  }
} 

void collision() {
  int from_y = 19;
  int to_x = 0;
  for (int i = to_x; i < matrix[from_y].size(); i++) {
    matrix[from_y][i] = 2;
  }
}
int main() {

  solidify_pice();
  collision();
  for (int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++){
      if(matrix[i][j] == 0) {
        cout << 0 << " ";
      } else if (matrix[i][j] == 1) {
        cout << 1 << " ";  
      } else if (matrix[i][j] == 2) {
        cout << 2 << " ";
      }
    }
    cout << endl; 
  }

  return 0;
}
