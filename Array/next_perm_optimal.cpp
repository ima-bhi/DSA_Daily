#include<bits/stdc++.h>

using namespace std;

vector < int > nextPerm(vector < int > & A) {
  //step 1. find the breakpoint
  int ind = -1;
  for (int i = A.size() - 2; i >= 0; i--) {
    if (A[i] < A[i + 1]) {
      ind = i;
      break;
    }
  }
  //if no break point found
  if (ind == -1) {
    reverse(A.begin(), A.end());
    return A;
  }
//swap the beakpoint
  for (int i = A.size() - 1; i >= 0; i--) {
    if (A[i] > A[ind]) {
      swap(A[i], A[ind]);
      break;
    }
  }

  //reverse the rested sorted array 
  reverse(A.begin() + ind + 1, A.end());
  return A;

};

int main() {
  int n = 5;
  vector < int > input = {
    1,
    2,
    3
  };
  vector < int > result = nextPerm(input);
  for (auto val: result) {
    cout << val << " ";
  }
  cout << endl;
}



//----------------------Problem Description------------------------
//Name - Next Permuation
// Approach - Optimal (used stl fxn )
//Time Complexity - O (n)
//Space Complexity - O (1)