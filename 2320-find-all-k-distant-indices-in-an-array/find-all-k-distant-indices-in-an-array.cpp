class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n= nums.size();
        int countDown = 0;

        for (int i = 0; i < n; i++){
            if (nums[i] == key) {
                countDown = k;
                continue;
            }

            if (countDown > 0) {
                nums[i] = -1;
                countDown--;
            }
        }

        for (int i = n-1; i >=0; i--){
            if (nums[i] == key) {
                countDown = k;
                continue;
            }

            if (countDown > 0) {
                nums[i] = -1;
                countDown--;
            }
        }

        vector<int> ans;


        for (int i = 0; i < n; i++) {
            if (nums[i] == -1 || nums[i] == key) {
                cout << nums[i] <<" " << i << endl;
                ans.push_back(i);
            }
        }

        return ans;

        
    }
};