class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int bestbuy = prices[0];
        for (int i = 1; i < n; i++) {
            if (prices[i] > bestbuy) {
                profit = max(profit, prices[i] - bestbuy);
            }
            bestbuy = min(bestbuy, prices[i]);
        }
        return profit;
        //     int n=nums.size();
        //      int maxprofit=0;
        //      int bestbuy=INT_MAX;
        //      for(int i=0;i<n;i++){
        //         bestbuy=min(bestbuy,nums[i]);

        //         maxprofit=max(maxprofit,nums[i]-bestbuy);

        //      }
        //   return maxprofit;
    }
};