#include<bits/stdc++.h>

using namespace std;
vector < vector < int >> generate(int numRows) {
  vector < vector < int >> triangle;
  for (int i = 0; i < numRows; ++i) {
    vector < int > row(i + 1, 1); // Create a row with i+1 elements, all initialized to 1

    for (int k = 1; k < i; ++k) {
      row[k] = row[k - 1] * (i - k + 1) / k;
    }
    triangle.push_back(row);
  }

  return triangle;
};

int main() {
  int n = 3;
  vector < vector < int >> result = generate(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }
}

// Approach - Optimized  -  Using Combinatorial Formula used

//  vector<vector<int>> generate(int numRows) {
//     vector<vector<int>> triangle;
//     for (int i = 0; i < numRows; ++i) {
//         vector<int> row(i + 1, 1); // Create a row with i+1 elements, all initialized to 1

//         for (int j = 1; j < i; ++j) {
//             // Each element is the sum of the two elements above it
//             row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//         }
//         triangle.push_back(row);
//     }

//     return triangle;
//     };

//----------------------Problem Description------------------------
//Name - Pascal Triangle 
// Approach - For all rows upto n optimize  
//Time Complexity - O (n*n)
//Space Complexity - O (n*n)