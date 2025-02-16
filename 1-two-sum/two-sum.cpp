class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // number, vector with indices
        unordered_map<int, vector<int>>count;
        
        for (int i= 0; i < n; i++) {
            count[nums[i]].push_back(i);
        }

        for (int i = 0; i < n; i++) {
            if(count.find(target-nums[i]) != count.end()&& 
                    i != count[target-nums[i]][0]) {
                return {i, count[target-nums[i]][0]};
            }
        }

        return {};

        
    }
};

