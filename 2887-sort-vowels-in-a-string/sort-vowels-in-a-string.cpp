class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;
        set<char> vowSet = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        for (char c: s) {
            if (vowSet.count(c))
                vowels.push_back(c);
        } 
        sort(vowels.begin(), vowels.end());

        int n = s.length();
        int pos = 0;
        string ans = "";
        for (int i = 0; i < n;i++) {
            if(vowSet.count(s[i])) {
                ans+=vowels[pos++];
            } else {
                ans +=s[i];
            }
        }

        return ans;
        
    }
};