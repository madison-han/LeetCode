class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        genPermute(ans, nums,0);

        return ans;
        
    }

    void genPermute(vector<vector<int>> &ans, vector<int>&nums, int start) {

            if (start == nums.size()) {
                ans.push_back(nums);
                return;
            }

            // Loop through the remaining elements starting from 'start'
            for (int i = start; i < nums.size(); ++i) {
                swap(nums[start], nums[i]);

                genPermute(ans, nums, start + 1);

                // Backtrack: swap back to the original position
                swap(nums[start], nums[i]);
            }
    }
 
};