class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans = 0;
        int start = 0,  end = h.size() -1;

        while (start < end) {
            int area = min(h[start],h[end]) * abs(start-end);
            if (area > ans) { ans = area; }

            if ( h[start] < h[end]) {
                start++;
            } else {
                end--;
            }
        }           
        return ans;
    }

};