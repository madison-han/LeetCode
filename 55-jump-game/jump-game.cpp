class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() ==1) return true;

        int pos = nums.size() - 1;

        for (int i = nums.size() -1; i >=0; i--) {
            if (nums[i] + i >= pos) {
                pos = i;
            }
        }

        return (pos == 0);
        
    }
};