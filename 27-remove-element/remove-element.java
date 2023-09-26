class Solution {
    public int removeElement(int[] nums, int val) {
        int index = 0;
        int length = nums.length;
        for (int i = 0; i < length; i++) {
            int num = nums[i];
            if (num != val) {
                nums[index++] = num;
            }
        }
        return index;
    }
}