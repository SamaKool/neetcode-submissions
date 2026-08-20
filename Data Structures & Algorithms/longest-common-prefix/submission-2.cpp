class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = strs[0];
        for(int i = 0; i < strs.size(); i++){
            for(int j = 0;/* j < strs[i].size() && */j < answer.size(); j++){
                if(answer[j] != strs[i][j]){
                    answer.erase(j);
                }
            }
            if(strs[i].size() == 0) {
                answer = "";
                return answer;
            }
        }
        return answer;
    }
};