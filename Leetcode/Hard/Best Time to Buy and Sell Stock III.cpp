123. Best Time to Buy and Sell Stock III
You are given an array prices where prices[i] is the price of a given stock on the ith day.
Find the maximum profit you can achieve. You may complete at most two transactions.
Note: You may not engage in multiple transactions simultaneously 
(i.e., you must sell the stock before you buy again).

Example 1:

Input: prices = [3,3,5,0,0,3,1,4]
Output: 6
Explanation: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.
Code Below:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice1 = INT_MAX;
        int profit1 = 0, profit2 = 0; 
        int minPrice2 = INT_MAX;
        for(int i=0;i<prices.size();i++){
            minPrice1 = min(minPrice1,prices[i]);
            profit1 = max(profit1,prices[i]-minPrice1);
            minPrice2 = min(minPrice2, prices[i]-profit1);
            profit2 = max(profit2, prices[i]-minPrice2);
        }
        return profit2;
    }
};