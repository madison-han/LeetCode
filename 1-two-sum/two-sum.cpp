class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(), temp = 0;

        for (int i = 0; i < n; i++) {
            temp = nums[i];
            for (int j = i; j < n; j++) {
                if (i == j) continue;
                
                if (temp + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};

        
    }
};

