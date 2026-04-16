class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min_price = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i] < min_price){
                min_price = prices[i];
            }else{
                profit = max(profit,prices[i]-min_price);
            }
        }
        return profit;
    }
};