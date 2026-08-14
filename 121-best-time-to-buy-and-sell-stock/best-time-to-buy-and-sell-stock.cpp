class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int curr = prices[0];
        int mx = 0;

        for(int i=0;i<n;i++){
            curr = min(curr , prices[i]);
            mx = max(mx , prices[i]-curr);
        }

        return mx;
        
    }
};