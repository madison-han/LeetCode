class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size(); // Edge case: arrays with at most 2 elements

        int unique_pos = 1; // Position to place the next valid element
        int count = 1;      // Count occurrences of the current element

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                count++; // Increment count if it's a duplicate
            } else {
                count = 1; // Reset count for a new number
            }

            if (count <= 2) { // Allow up to two occurrences
                nums[unique_pos] = nums[i];
                unique_pos++;
            }
        }

        return unique_pos; // Return the new length of the array
    }
};
