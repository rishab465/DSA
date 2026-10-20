class Solution {
public:
    int arrangeCoins(int n) {

       
        int ans = 0;
        long long rem = n;

        for (int i = 1; i <= n; i++) {
            if (rem >= i) {
                rem -= i;
                ans++;
            } else {
                break;
            }
        }

        return ans;
    }
};