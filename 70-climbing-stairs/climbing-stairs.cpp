class Solution {
public:
    int climbStairs(int n) {
        if (n<=2) return n;
        int ans = 2, prev = 1, temp = 0;
        for (int i = 0; i < n-2; i++) {
            temp = ans;
            ans += prev;
            prev = temp;
        }
        return ans;
        //1 / 1 2 3 5 8
    }
};