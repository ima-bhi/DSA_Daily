#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    //define rows and columns
    int rows=matrix.size();
    int columns= matrix[0].size();
     set<int> zeroRows;
    set<int> zeroCols;
    //iterate over rows - to mark row and columns
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            //check for its value
            if(matrix[i][j]==0){
                zeroRows.insert(i);
                zeroCols.insert(j);
            }
        }
    }

   // Second pass: set the identified rows and columns to zero
    for (int row : zeroRows) {
        for (int j = 0; j < columns; ++j) {
            matrix[row][j] = 0;
        }
    }
    for (int col : zeroCols) {
        for (int i = 0; i < rows; ++i) {
            matrix[i][col] = 0;
        }
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


//----------------------Problem Description------------------------
//Name - Set Matrix Zeroes
// Approach - Brute Force
//Time Complexity - O (zeroRows * zeroCols)
//Space Complexity - O (zeroRows + zeroCols)

