class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int len = n.size();
        int begin = 0, end = len - 1;
        vector<int> ans = {0,0};

        while(begin < end) {
            if(n[begin] + n[end] == target) {
                ans = {begin + 1, end+1}; 
                return ans;
            } else if (n[begin] + n[end] > target) {
                end--;
            } else {
                begin++;
            }
        }

        return ans;



    }
};