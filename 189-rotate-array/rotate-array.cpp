class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (k == 0 || nums.size() <=1  || nums.size() == k) return;

        for (int i = 0; i < nums.size()/2; i++) {
            swap(nums[i], nums[nums.size()-1 - i]);
        }

        k = k % nums.size();



        for (int i = 0; i < k/2; i++) {
            swap(nums[i], nums[k-1-i]);
        }

        for (int i = k; i < (k+nums.size())/2; i++){
            swap(nums[i], nums[nums.size()-1+k-i]);
        }
        
    }
};