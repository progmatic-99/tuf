#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<vector<int>> matrix;
  int rows = matrix.size();
  int cols = matrix[0].size();
  int zerothCol = 1;

  for(int i=0; i<rows; ++i) {
    if(matrix[i][0] == 0)  zerothCol = 0;

    for(int j=0; j<cols; ++j) {
      if(matrix[i][j] == 0) {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    }
  }

  for(int i=rows-1; i>=0; --i) {
    for(int j=cols-1; j>=1; --j) {
      if(matrix[i][0] == 0 || matrix[j][0] == 0) {
        matrix[i][j] = 0;
      }

      if(zerothCol == 0) {
        matrix[i][j] = 0;
      }
    }
  }
  return 0;
}
