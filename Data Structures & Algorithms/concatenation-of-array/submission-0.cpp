class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size=nums.size();
        vector<int>newarr(2*size,0);
        for(int i=0;i<size;i++){
            newarr[i]=nums[i];
            newarr[i+size]=nums[i];
        }
        return newarr;
    }
};