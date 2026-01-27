class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int minPrice = arr[0];
        int profit = 0;

        for (int i = 1; i < arr.size(); i++) {
            minPrice = min(minPrice, arr[i]);      
            profit = max(profit, arr[i] - minPrice); 
        }

        return profit;
    } 
};