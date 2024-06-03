#include <bits/stdc++.h>

using namespace std;

string checkFavoriteElement(vector < int > & A, int n, int k, int f) {
  // Step 1: Get the favorite element and its count
  int favoriteElement = A[f - 1];
  int favoriteElementCount = count(A.begin(), A.end(), favoriteElement);

  // Step 2: Sort the array in ascending order
  sort(A.begin(), A.end(), greater < int > ());

  // Step 3: Remove k elements from the left
  if (k >= n) {
    // If k is greater than or equal to n, all elements are removed
    return "YES";
  }
  A.erase(A.begin(), A.begin() + k);
  // Step 4: Count remaining favorite elements
  int leftFavoriteCount = count(A.begin(), A.end(), favoriteElement);
  // Step 5: Determine the result
  if (leftFavoriteCount == 0) {
    return "YES";
  } else if (leftFavoriteCount == favoriteElementCount) {
    return "NO";
  } else {
    return "MAYBE";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, f, k;
    cin >> n >> f >> k;
    vector < int > A(n);
    for (int i = 0; i < n; ++i) {
      cin >> A[i];
    }

    string result = checkFavoriteElement(A, n, k, f);
    cout << result << "\n";
  }

  return 0;
}