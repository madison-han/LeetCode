class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> count;

        for (string s : cpdomains) {
            int num = stoi(s.substr(0, s.find(" ")));
            s =s.substr(s.find(" ") + 1);

            count[s] += num;

            const string og = s;

            while (s.rfind(".") != string::npos) {
                count[og.substr(s.rfind(".") + 1)] += num;
                s = s.substr(0, s.rfind("."));
            }
        }
        vector<string> ans;
        for (const auto& pair: count) {
            ans.push_back(to_string(pair.second) + " " + pair.first);
        }

        return ans;
    }
};