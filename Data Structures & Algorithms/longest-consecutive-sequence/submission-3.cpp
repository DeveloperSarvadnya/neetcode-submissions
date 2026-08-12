class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>stt(nums.begin(),nums.end());
        int len=0,maxlen=0;

        for(auto i:stt){
            if(stt.find(i-1)==stt.end()){
                int curr=i;
                len=1;
                while(stt.find(curr+1)!=stt.end()){
                    curr++;
                    len++;
                }
                maxlen=max(len,maxlen);
            }
        }
        return maxlen;
    }
};
