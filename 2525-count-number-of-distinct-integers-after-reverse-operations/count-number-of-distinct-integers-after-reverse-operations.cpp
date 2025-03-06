class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> count;

        for (int num : nums) {
            count.insert(num);

            if (num >= 10) {
                int reversed = 0;
                while (num > 0) {
                    reversed = reversed * 10 + (num % 10);
                    num /= 10;
                }
                count.insert(reversed);
            }
        }

        return (count.size());
        
    }
};