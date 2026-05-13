class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int nw = nums[0];
        int mx = nums[0];

        for(int i=1;i<n;i++){
            nw = max(nums[i] , nw + nums[i]);
            mx = max(mx , nw);
        }

        return mx;
    }
};