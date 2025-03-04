class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ans = ((ax2 - ax1)*(ay2-ay1)) + ((bx2 - bx1)*(by2 - by1));
        if (ay1 >= by2 || ay2 <= by1 || ax2 <= bx1 || ax1 >= bx2) { 
            return ans; 
        }

        int cy1 = 0, cx1 = 0, cy2 = 0, cx2 = 0;

        cy1 = ay1 >= by1 ? ay1 : by1;
        cx1 = ax1 >= bx1 ?  ax1 : bx1;
        cy2 = ay2 <= by2 ? ay2 : by2;
        cx2 = ax2 <= bx2 ?  ax2 : bx2;
        cout << cx1 << " " << cy1 << " " << cx2 << " " << cy2 << " ";
        
        return (ans-  ((cx2 - cx1) * (cy2 - cy1)));
    }
};