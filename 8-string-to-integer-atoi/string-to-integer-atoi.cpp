class Solution {
public:
    int myAtoi(string s) {
        double num=0;
        bool isNeg = false;

        int i = 0;

        while(!isdigit(s[i])){
            if (s[i] == ' ') i++;
            else if (s[i] == '+') {
                if (i+1 >= s.length() || !isdigit(s[i+1]))
                    return 0;
                else
                    i++;
            } else if  (s[i] == '-') {
                if (i+1 >= s.length() || !isdigit(s[i+1])) {
                    return 0;
                } else {
                    isNeg=true;
                    i++;
                }
            } else { //letter, invalid character
                return 0;
            }
        }


        while(isdigit(s[i])) {
            num=num*10 + (s[i++]-48); // '0' is 48 in dec
        }

        if (isNeg) { num *= -1;}

        if (num > INT_MAX) { num = INT_MAX; }
        if (num < INT_MIN) { num = INT_MIN; }

        return (int(num));



          
    }
};