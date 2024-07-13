class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0, len = word.length();
        
        if (len <= 8) return len;

        for (int i = 1; i <= 4 && len > 0; i++) {
            if (len >= 8) {
                ans += 8 * i;
            } else {
                ans += len * i;
            }
            len -= 8;
              
        }

        return ans;


        
    }
};