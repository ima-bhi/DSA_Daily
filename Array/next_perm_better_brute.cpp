#include<bits/stdc++.h>
using namespace std;

vector < int > nextPerm(vector<int>&A) {
    //using STL
    next_permutation(A.begin(),A.end());
    return A;
 
};

int main() {
  int n = 5;
  vector<int>input={1,2,3};
  vector < int > result = nextPerm(input);
  for (auto val: result) {
    cout << val << " ";
  }
  cout << endl;
}


//Approach BruteForce - step 1. generate all permutation, find the input nmber and last return the next value

// // Helper function to generate all permutations recursively
// void generatePermutations(vector<int> &A, int start, vector<vector<int>> &permutations) {
//     if (start == A.size()) {
//         permutations.push_back(A);
//         return;
//     }
//     for (int i = start; i < A.size(); i++) {
//         swap(A[start], A[i]);
//         generatePermutations(A, start + 1, permutations);
//         swap(A[start], A[i]); // backtrack
//     }
// }

// vector<int> nextPerm(vector<int> &A) {
//     // Generate all permutations
//     vector<vector<int>> permutations;
//     generatePermutations(A, 0, permutations);
    
//     // Sort the permutations to ensure they are in lexicographical order
//     sort(permutations.begin(), permutations.end());
    
//     // Find the index of the input permutation
//     int index = 0;
//     for (int i = 0; i < permutations.size(); i++) {
//         if (permutations[i] == A) {
//             index = i;
//             break;
//         }
//     }
    
//     // Return the next permutation
//     int nextIndex = (index + 1) % permutations.size();
//     return permutations[nextIndex];
// }

// T(n)- (N! . N logN)
//S(n) - (N! . N)

//----------------------Problem Description------------------------
//Name - Next Permuation
// Approach - Brute + Better (used stl fxn )
//Time Complexity - O (n)
//Space Complexity - O (n)