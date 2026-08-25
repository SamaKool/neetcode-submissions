#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        char* low = &s[0];
        char* high = &s[n - 1];

        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return tolower(c);
        });

        while(low < high){

            while(low < high && !isalnum(static_cast<unsigned char>(*low))){
                low++;
            }

            while(low < high && !isalnum(static_cast<unsigned char>(*high))){
                high--;
            }

            if(tolower(static_cast<unsigned char>(*low)) != tolower(static_cast<unsigned char>(*high))){
                return false;
            }
            
            low++;
            high--;
            
        }
        return true;
    }
};
