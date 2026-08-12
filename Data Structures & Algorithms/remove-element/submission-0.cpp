class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int r=nums.size(),i=0;
        int count=0;
        while(i<r){
            if(nums[i]==val){
                swap(nums[i],nums[r-1]);
                r--;
                count++;
            }
            else{
                i++;
            }
        }
        
        return nums.size()-count;
    }
};