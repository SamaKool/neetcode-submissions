class MinStack {
private:
    vector<int> s;
public:
    MinStack() {
    }
    
    void push(int val) {
        s.push_back(val);
    }
    
    void pop() {
        s.erase(s.end() - 1);
    }
    
    int top() {
        return s[s.size() - 1];
    }
    
    int getMin() {
        int least = *(s.end() - 1);
        for(auto& it: s) {
            if(it < least) {
                least = it;
            }
        }
        return least;
    }
};
