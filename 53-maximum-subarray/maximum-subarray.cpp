class Solution {
public:
    int maxSubArray(vector<int>& prices) {
        int n = prices.size();
        int mn = prices[0];
        int ans = prices[0];
        for(int i=1;i<n;i++){
            mn = max(prices[i] , mn+prices[i]);
            ans = max(ans, mn);
        }
        return ans;
    }
};