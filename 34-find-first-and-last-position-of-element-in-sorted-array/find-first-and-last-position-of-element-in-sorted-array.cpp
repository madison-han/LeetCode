class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        int n = nums.size();
        vector<int> ans(2,-1);

        if (n == 0||nums[0]>tar||nums[n-1]<tar)
            return ans;

        int start = 0, end = n-1;
        while(start <= end) {
            int mid = start+((end-start)/2);
            if (nums[mid]==tar) {
                start=mid;
                end=mid;
                while (start-1 >=0 && nums[start-1] == tar) {
                    start--;
                }
                while(end+1 <= n-1 && nums[end+1] == tar) {
                    end++;
                }

                return{start,end};
                
            }

            if (nums[mid] < tar) { 
                start = mid+1;
            } else if (nums[mid] > tar) {
                end = mid-1;
            }
        }

        return {-1, -1};
        
    }
};