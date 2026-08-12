class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>s1;
        for(int i=0;i<nums.size();i++){
            if(s1.count(nums[i])){
                return true;
            }
            s1.insert(nums[i]);
        }
        return false;
    }
};