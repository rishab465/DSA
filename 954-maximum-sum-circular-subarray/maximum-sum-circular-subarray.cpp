class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();


        int currSum = nums[0];
        int maxSum = nums[0];
        int minSum = nums[0];
        int currMin = nums[0];
        int totalSum = nums[0];
        for(int i=1;i<n;i++){
            totalSum += nums[i];

            currSum = max(nums[i] , currSum + nums[i]);
            maxSum = max(maxSum , currSum);

            currMin = min(nums[i] , currMin + nums[i]);
            minSum = min(currMin , minSum);
        }

        if(maxSum < 0){
            return maxSum;
        }

        return max(maxSum , totalSum - minSum);
    }
};