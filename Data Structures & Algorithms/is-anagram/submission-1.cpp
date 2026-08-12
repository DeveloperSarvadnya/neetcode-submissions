class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>mpp;
        for(auto i:s){
            mpp[i]++;
        }
        for(auto i:t){
            if(--mpp[i]<0){
                return false;
            }
            
        }
        return true;
    }
};
