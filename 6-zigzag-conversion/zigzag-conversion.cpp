class Solution {
public:
    string convert(string s, int rows) {
        int n = s.length();
        if (n == 1 || rows == 1) return s;
        
        string ans = "";
        int space = rows-2 >= 0 ? (2*rows)-2 : rows;
        int pos = space;

        for (int i = 0; i < rows; i++) {
            string temp ="";

            for (int j = i; j < n; j += space) {
                temp += s[j];
                if (pos != 0 && pos != space && j + pos < n) {
                    temp += s[j+pos];
                }
            }

            pos -= 2;
            ans += temp;
        }

        return ans;

        // 1 7 13
        // 2 6-8 12-14
        // 3-5   9-11
        // 4 10
        

        

        
    }
};