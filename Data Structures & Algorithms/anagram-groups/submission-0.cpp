class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(auto x:strs){
            string temp=x;
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(x);
        }
        vector<vector<string>>v1;
        for(auto i:mpp){
            v1.push_back(i.second);
        }
        return v1;

    }
};
