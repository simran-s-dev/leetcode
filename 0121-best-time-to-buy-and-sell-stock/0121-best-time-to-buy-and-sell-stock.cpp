class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini =prices[0],profit =0;

        for(int i=1;i<prices.size();i++){
            int cost =prices[i]-mini;
            profit =max(cost,profit);
            mini= min(prices[i],mini);
        }
        if(profit<0) return 0;
       return profit; 
    }
};