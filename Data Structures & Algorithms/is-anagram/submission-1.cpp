#include <ranges>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        map<char, int> S;
        map<char, int> T;
        for (auto [a, b] : views::zip(s, t)){
            S[a]++;
            T[b]++;
        }
        if(S == T) return true;
        return false;
    }
};
