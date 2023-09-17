class Solution {
    public int countPairs(List<Integer> nums, int target) {
        int numsSize = nums.size();
        int ans = 0;

        for(int i = 0; i < numsSize; i++) {
            for (int j = i + 1; j < numsSize; j++) {
                if (nums.get(i) + nums.get(j) < target) ans++;
            }
        }

        return ans;
        
    }
}