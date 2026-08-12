class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(auto i:nums){
            mpp[i]++;
            if(mpp[i]>n/2){
                return i;
            }
        }
        return 0;
    }
};