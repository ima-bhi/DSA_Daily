#include<bits/stdc++.h>

using namespace std;

//approach 1: 
void setZeroes(vector < vector < int >> & matrix) {
  int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

  // Marking Zeroes
  for (int i = 0; i < rows; i++) {
    if (matrix[i][0] == 0) col0 = 0;

    //mark elements in other columns rather than 0

    for (int j = 1; j < cols; j++)
      if (matrix[i][j] == 0)
        matrix[i][0] = matrix[0][j] = 0;
  }

  //setting zeroes

  for (int i = rows - 1; i >= 0; i--) {
    for (int j = cols - 1; j >= 1; j--)
      if (matrix[i][0] == 0 || matrix[0][j] == 0)
        matrix[i][j] = 0;
    if (col0 == 0) matrix[i][0] = 0;
  }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };
    
    setZeroes(matrix);
    
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}

// Approach 2nd - aka striver. 
// void setZeroes(vector < vector < int >> & matrix) {
//   //define rows and columns
//   int rows = matrix.size();
//   int columns = matrix[0].size();
//   //step 1. marks the rows and column
//   int col0 = 1;
//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < columns; j++) {
//       if (matrix[i][j] == 0) {
//         matrix[i][0] = 0;
//         //mark the jth
//         if (j != 0) {
//           matrix[0][j] = 0;
//         } else {
//           col0 = 0;
//         }
//       }
//     }
//   }
//   //mark elements in other columns rather than 0
//   for (int i = 1; i < rows; i++) {
//     for (int j = 1; j < columns; j++) {
//       if (matrix[i][j] != 0) {
//         //check row and column
//         if (matrix[0][j] == 0 || matrix[i][0] == 0) {
//           matrix[i][j] = 0;
//         }
//       }
//     }
//   }
//   //step 3.   //setting zeroes
//   if (matrix[0][0] == 0) {
//     for (int j = 0; j < rows; j++) {
//       matrix[0][j] = 0;
//     }
//   }
//   if (col0 == 0) {
//     for (int i = 0; i < columns; i++) {
//       matrix[i][0] = 0;
//     }
//   }
// }



//----------------------Problem Description------------------------
//Name - Set Matrix Zeroes
// Approach - Optimal Force
//Time Complexity - O (rows * columns)
//Space Complexity - O (1)