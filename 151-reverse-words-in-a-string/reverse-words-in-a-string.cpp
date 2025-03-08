class Solution {
public:
    string reverseWords(string s) {
        s.erase(0, s.find_first_not_of(' ')); 
        s.erase(s.find_last_not_of(' ') + 1); 
        
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string result;
        for (size_t i = 0; i < words.size(); ++i) {
            if (i > 0) {
                result += ' '; 
            }
            result += words[i];
        }

        return result;
    }
};