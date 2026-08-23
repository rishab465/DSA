class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double ans = 0;
        double avg = 0;
        for(int i=0;i<k;i++){
            avg += nums[i];
        }
        ans = avg/k;

        for(int i=k;i<n;i++){
            avg -= nums[i-k];
            avg += nums[i];
            ans =  max(ans , avg/k);
        }

        return ans;

    }
};