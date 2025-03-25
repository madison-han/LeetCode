class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return {nums[0]};
        vector<int> ans(n,1);

        int curr = 1;

        for (int i  = 0; i < n; i++) {
            ans[i] *= curr;
            curr *= nums[i];
        }
        curr = 1;

        for (int i =0; i <n; i++) {
            ans[n-i-1] *= curr;
            curr *= nums[n-i-1];

        }
        return ans;



        
    }
};