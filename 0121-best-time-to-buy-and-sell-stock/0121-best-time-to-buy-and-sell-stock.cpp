class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int mn=INT_MAX;
        int j=0;
        for(int price: prices){
            mn=min(price,mn);
            profit=max(profit,price-mn);
        }
        return profit;

        
    }
};