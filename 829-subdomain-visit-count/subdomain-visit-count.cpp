class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> count;

        for (string s : cpdomains) {
            int num = stoi(s.substr(0, s.find(" ")));
            s =s.substr(s.find(" ") + 1);

            count[s] += num;

            int slen = s.length();
            for (int i = slen-1; i>=0; i--) {
                if (s[i] == '.') {
                    count[s.substr(i+1)] += num;
                }
            }
        }
        vector<string> ans;
        for (const auto& pair: count) {
            ans.push_back(to_string(pair.second) + " " + pair.first);
        }

        return ans;
    }
};