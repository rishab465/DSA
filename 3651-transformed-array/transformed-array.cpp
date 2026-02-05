class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        int n = nums.size();
        if(n == 0) return {};

        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                ans[i] = 0;
            } else {
                long long idx = ((long long)i + nums[i]) % n;
                if(idx < 0) idx += n;   // normalize
                ans[i] = nums[idx];
            }
        }
        return ans;
    }
};
