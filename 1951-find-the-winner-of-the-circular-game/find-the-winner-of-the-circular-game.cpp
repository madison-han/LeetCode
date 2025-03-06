class Solution {
public:
    int findTheWinner(int n, int k) {
        if (n == 1 || k ==1) return n;

        int ans =0;

        for (int i = 2; i <= n; i++) {
            ans = (ans + k) % i;
        }
        return ans+ 1;
    }
};