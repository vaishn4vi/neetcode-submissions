class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=prices[0];
        int maxprof=0;
    for(int i=1;i<prices.size();i++){
        int profit= prices[i]-price;
        maxprof= max(maxprof,profit);
        price= min(prices[i],price);
    }
    return maxprof;
    }
};
