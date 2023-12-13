class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scores;
        int a = 0, b = 0;

        for (string s: operations){
            if (s=="D") {
                scores.push(scores.top() * 2);
            } else if (s=="C") {
                scores.pop();
            } else if(s=="+") {
                b = scores.top();
                scores.pop();
                a = scores.top();
                scores.push(b);
                scores.push(a+b);
            } else {
                scores.push(stoi(s));
            }
        }
        a = 0;

        while (!scores.empty()) {
            a += scores.top();
            scores.pop();
        }

        return a;
        
    }
};
