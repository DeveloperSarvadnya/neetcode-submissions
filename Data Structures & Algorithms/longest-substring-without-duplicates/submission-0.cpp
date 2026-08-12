class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0,size=0,maxsize=0;
        unordered_set<char>st;
        for(int i=0;i<s.size();i++){
            if(st.find(s[i])!=st.end()){
                while(st.find(s[i])!=st.end()){
                    st.erase(s[start]);
                    start++;
                }
                st.insert(s[i]);
                size=i-start+1;
                maxsize=max(size,maxsize);
            }
            else{
                st.insert(s[i]);
                size=i-start+1;
                maxsize=max(size,maxsize);
            }
        }
        return maxsize;
    }
};
