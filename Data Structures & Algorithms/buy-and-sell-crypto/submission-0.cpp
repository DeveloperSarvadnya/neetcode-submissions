class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=INT_MAX,stockp=0,maxstock=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<low){
                low=prices[i];
            }
            else{
                stockp=prices[i]-low;
                maxstock=max(stockp,maxstock);
            }
        }
        return maxstock;
    }
};
