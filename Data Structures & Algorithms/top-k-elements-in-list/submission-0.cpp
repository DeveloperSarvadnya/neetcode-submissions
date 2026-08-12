class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for (auto x : nums) {
            mpp[x]++;
        } 
        vector<pair<int, int>> v1;
        for (auto x : mpp) {
            v1.push_back({x.first, x.second});
        }
        vector<int>v2;
        sort(v1.begin(), v1.end(), [](auto& a, auto& b) { return a.second>b.second;});
        for(int i=0;i<k;i++){
            v2.push_back(v1[i].first);
        }
        return v2;
    }
};
