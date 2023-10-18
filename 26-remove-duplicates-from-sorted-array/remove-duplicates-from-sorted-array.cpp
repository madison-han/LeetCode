class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();

        if (len <= 1) return len; 

        int num = nums[0], pos = 1, temp = 0;

        for (int i = 1; i < len; i++) {
            temp = nums[i];
            if (temp == num) {
                continue;
            } else {
                nums[pos++] = temp;
                num = temp;
            }
        }

        return pos;
        
    }
};