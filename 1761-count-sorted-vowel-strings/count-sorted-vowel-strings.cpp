class Solution {
public:
    int countVowelStrings(int n) {
        if (n == 0) return 0;
        else if (n == 1) return 5;


        return ((n+1)*(n+2)*(n+3)*(n+4))/24;

    }
};