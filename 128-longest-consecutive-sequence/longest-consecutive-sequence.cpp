class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        sort(nums.begin() , nums.end());
        int mx = 0;
        int count = 0;
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]) {
                continue; // ignore duplicates
            }
            if(nums[i] - nums[i-1] == 1){
                count++;
            } else{
                count = 0;
            }

            mx = max(mx , count);
        }
        return mx+1;
    }
};