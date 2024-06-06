class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            if (m.find(comp) != m.end()) {
                result.push_back(m[comp]);
                result.push_back(i);
                break;
            } else
                m.insert({nums[i], i});
        }
        return result;
    }
};



//----------------------Problem Description------------------------
//Name - 2 Sum
// Approach - Using map
//Time Complexity - O (n)
//Space Complexity - O (n)