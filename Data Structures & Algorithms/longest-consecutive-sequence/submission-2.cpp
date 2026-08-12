class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        set<int>stt;
        for(auto i:nums){
            stt.insert(i);
        }
        int count=1,maxcount=1;
        auto prev=*stt.begin();
        for(auto i:stt){
            if(i==prev){
                continue;
            }
            if(i==prev+1){
                count++;
                prev=i;
            }
            else{
                maxcount=max(count,maxcount);
                count=1;
                prev=i;
            }
        }
        maxcount=max(count,maxcount);
        return maxcount;
    }
};
