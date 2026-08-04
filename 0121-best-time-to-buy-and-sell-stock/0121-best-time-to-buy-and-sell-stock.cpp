class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int bestbuy = prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<bestbuy){
                bestbuy=prices[i];   
            }
            else{
                int profit=prices[i]-bestbuy; 
                maxprofit=max(maxprofit,profit);
            }
        }
        return maxprofit;
    }
};