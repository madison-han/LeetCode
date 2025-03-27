class Solution {
public:
    string simplifyPath(string path) {
        if (path.length() == 1) return "/";
        string ans = "";

        vector<string> files;
        stringstream ss(path);
        string word = "";
        while (getline(ss, word, '/')) { files.push_back(word); }

        int n = files.size();
        int skip = 0;

        for (int i =n-1; i >= 0; i--) {
            while (files[i] == ".." && i >0) {
                skip++;
                i--;
            } 
            cout << "G " << skip<<endl;
            if (skip > 0 && files[i] != "." && files[i] != "") {
                files[i] = "";
                skip--;
            }

        }

        for (int i = 0; i<n; i++) {
            if (files[i] != "." && files[i] != ".." && files[i] != "") {
                ans += "/" + files[i];
            }
        }

        if (ans == "") {ans = "/";}
        return ans;
        
    }
};