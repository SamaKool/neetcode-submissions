class Solution {
public:
    bool isValid(string s) {
        stack<int> a;
        auto it = s.begin();
        while (it != s.end()){
            if(*it == ')' || *it == ']' || *it == '}') {
                if (a.empty()) return false;

                if(*it == ')' && a.top() != '(') {
                    return 0;
                }
                else if(*it == ']' && a.top() != '[') {
                    return 0;
                }
                else if(*it == '}' && a.top() != '{') {
                    return 0;
                }
                else a.pop();
            }
            else {
                a.push(*it);
            }
            it++;
        }
        return a.empty();
    }
};
