class Solution {
public:
int distSq(vector<int>& a, vector<int>& b) {
        return (a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
            
        vector<int> points[4] = {p1, p2, p3, p4};
        unordered_set<int> distances;

        for (int i = 0; i < 4; ++i) {
            for (int j = i + 1; j < 4; ++j) {
                int d = distSq(points[i], points[j]);
                if (d == 0) return false; 
                distances.insert(d);
            }
        }

        return distances.size() == 2;  
    }
};