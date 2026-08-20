class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
        for(auto it: nums){
            if(hash[it] == 1) return true;
            hash[it]++;
        }
        return false;
    }
};