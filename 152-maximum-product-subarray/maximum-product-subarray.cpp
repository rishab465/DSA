class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            int ans = nums[i];
            mx = max(ans , mx);
            for(int j=i+1;j<n;j++){
                
                ans *= nums[j];
                mx = max(ans , mx);
            }
        }
       
        return mx;
    }
};