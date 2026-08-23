class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int ct = 0;
        int left = 0;
        int mx = 0;
        for(int i=0;i<n;i++){

            if(nums[i] == 0){
                ct++;
            }

            while(ct > k){
                if(nums[left] == 0){
                    ct--;
                }
                left++;
            }

            

            mx = max(mx , i-left+1);
        }
        return mx;
    }
};