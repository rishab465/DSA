class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n == 0) return 0;
        
        int count = 1;
        int mx = 1;

        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1]) {
                continue; // ignore duplicates
            }
            else if(nums[i] - nums[i-1] == 1){
                count++;
            }
            else{
                count = 1;
            }
            mx = max(mx, count);
        }

        return mx;
    }
};