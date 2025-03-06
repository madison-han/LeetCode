class Solution {
public:
    bool squareIsWhite(string coords) {
        // 97 to 105
        char let = coords[0], num = coords[1];
        return ((let % 2 == 0 && num % 2 == 1) || 
                (let % 2 == 1 && num % 2 == 0));
        
    }
};