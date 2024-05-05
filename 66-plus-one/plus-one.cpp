class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        if (digits[n - 1] + 1 < 10) {
            digits[n-1]++;
            return digits;
        }

        bool addOne = true;

        for (int i = n - 1; i >= 0; i--) {
            digits[i]++;

            if(digits[i] >= 10 && i != 0) {
                digits[i] = 0;
            } else {
                break;
            }
        }

        if (digits[0] >= 10) {
            digits[0] = 1;
            digits.push_back(0);
        }

        return digits;

        
    }
};