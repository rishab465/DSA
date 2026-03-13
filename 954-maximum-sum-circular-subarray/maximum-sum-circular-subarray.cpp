class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int totalSum = nums[0];
        int curSum = nums[0] ;
        int maxSum = nums[0];
        int curMin = nums[0];
        int minSum = nums[0];

        for(int i=1;i<n;i++){
            totalSum += nums[i];
            curSum = max(nums[i] , curSum + nums[i]);
            maxSum = max(curSum , maxSum );

            curMin = min(nums[i] , curMin + nums[i]);
            minSum = min(curMin , minSum );

            
        }
        if(maxSum < 0) return maxSum;
        return max(maxSum , totalSum - minSum);

}
};