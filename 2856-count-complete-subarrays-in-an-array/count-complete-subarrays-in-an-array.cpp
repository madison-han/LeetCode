class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) { return 1; }
        
        unordered_set<int>elems(nums.begin(), nums.end());
        int num_distinct = elems.size();

        unordered_set<int>seen;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                seen.insert(nums[j]);
                if (seen.size() == num_distinct) {
                    ans+= n-j;
                    break;
                }
            }
            seen.clear();
        }

        return ans;


    }
};