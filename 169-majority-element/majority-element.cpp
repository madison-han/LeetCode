class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        if (n <= 2) return nums[0];

        map<int, int> count;

        int temp = 0;


        for (int i = 0; i < n; i++) {
            temp = nums[i]++;
            count[temp]++;

            if (count[temp] > (n / 2)) return temp;

        }

        return 0;
        
    }
};
