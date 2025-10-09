class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int minProfit = INT_MAX;
        for(int price : prices ){
            if(price< minProfit){
                minProfit = price;
            }else{
                profit = max(profit,price-minProfit);
            }
        }
        return profit;
        
    }
};