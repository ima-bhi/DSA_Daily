#include<bits/stdc++.h>

using namespace std;

vector < int > generate(int numRows) {
  vector < int > row(numRows + 1, 1); // Create a row with numRows+1 elements, all initialized to 1
  for (int k = 1; k < numRows; ++k) {
    row[k] = row[k - 1] * (numRows - k + 1) / k;
  }
  return row;
};

int main() {
  int n = 5;
  vector < int > result = generate(n - 1);
  for (auto val: result) {
    cout << val << " ";
  }
  cout << endl;
}


//----------------------Problem Description------------------------
//Name - Pascal Triangle 
// Approach - For one row only 
//Time Complexity - O (n)
//Space Complexity - O (n)