class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mn = INT_MAX;
        int nwmx = INT_MIN;
        int ans = 0;
        for(int i=0;i<n;i++){
            mn = min(mn , prices[i]);
            ans = max(ans , prices[i]-mn);
            
        }
        return ans;
    }
};