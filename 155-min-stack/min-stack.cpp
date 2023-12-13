class MinStack {
    vector<pair<int, int>> array;

    public:
        MinStack() { }

        void push(int val) {
            if (array.empty()) {
                array.push_back({val, val});
            } else {
                array.push_back({val, min(array.back().second, val)});
            }
        }

        void pop() { array.pop_back(); }

        int top() { return array.back().first; }

        int getMin() { return array.back().second; }
};
