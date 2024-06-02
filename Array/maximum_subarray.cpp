#include<bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int n=nums.size();
    int currSum=nums[0],maxm=nums[0];
    for(int i=1;i<n;i++){
         if(currSum<0){
            currSum=0;
        }
        currSum+=nums[i];
       
        maxm=max(maxm,currSum);
    }
    return maxm;
    }

int main() {
  int n = 5;
  vector < int > input = {-2,1,-3,4,-1,2,1,-5,4};
  int res = maxSubArray(input);
  cout << res;
}

// Approach 2 : prefix Sum
  // int maxSubArray(vector<int>& nums) {
  //       int n = nums.size();
  //       vector<int> sum(n);
        
  //       sum[0] = nums[0];
  //       for(int i =1; i<n; i++){
  //           sum[i] = max(sum[i-1]+nums[i], nums[i]);
  //       }
  //       sort(sum.begin(),sum.end());
  //       return sum[n-1];
  //   }



  
//----------------------Problem Description------------------------
//Name - Maximum Subarray sum
// Approach - Optimal - kadane algom
//Time Complexity - O (n)
//Space Complexity - O (1)