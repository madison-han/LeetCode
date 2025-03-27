class Solution {
public:
    string simplifyPath(string path) {
        vector<string> components;
        stringstream ss(path);
        string component;
        
        while (getline(ss, component, '/')) {
            if (component.empty() || component == ".") continue;
            
            if (component == "..") {
                if (!components.empty()) {
                    components.pop_back();
                }
            } else {
                components.push_back(component);
            }
        }
        
        if (components.empty()) return "/";
        
        string simplifiedPath;
        for (const string& dir : components) {
            simplifiedPath += "/" + dir;
        }
        
        return simplifiedPath;
    }
};