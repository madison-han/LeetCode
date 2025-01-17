class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        if (n == 0) return ans;

        add(ans, n, "", 0);
        return ans;
    }

    // n is num of ) remaining, m is num of ( remaining 
    void add(vector<string> &vec, int n, string s, int m) {
        if (n == 0 && m==0){
            vec.push_back(s);
            return;
        }

        if(m > 0) {
            add(vec, n, s+")", m-1);
        }

        if (n > 0) {
            add(vec, n-1, s+"(", m+1);
        }

    }
};