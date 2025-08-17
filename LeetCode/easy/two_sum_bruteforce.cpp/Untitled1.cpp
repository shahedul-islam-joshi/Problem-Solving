#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // check all pairs (i, j)
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // found the answer
                }
            }
        }
        return {}; // no solution (but problem guarantees one exists)
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = sol.twoSum(nums, target);
    cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
    return 0;
}

