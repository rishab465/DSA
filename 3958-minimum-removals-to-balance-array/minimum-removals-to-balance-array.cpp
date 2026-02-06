class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int maxLen = 1;
        int i = 0;
        
        for(int j = 0; j < n; j++){
            while(nums[j] > (long long)k * nums[i]){
                i++;
            }
            maxLen = max(maxLen, j - i + 1);
        }
        
        return n - maxLen;

    }
};