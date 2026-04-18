class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        
        int mx = 0;
        for(int i = 0; i < n; i++){
            mx = max(mx, piles[i]);
        }

        int low = 1, high = mx;
        int ans = mx;

        while(low <= high){
            int mid = low + (high - low) / 2;

            long long hour = 0;

            for(int i = 0; i < n; i++){
                hour += (piles[i] + mid - 1) / mid;  
            }

            if(hour <= h){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;    
            }
        }

        return ans;
    }
};