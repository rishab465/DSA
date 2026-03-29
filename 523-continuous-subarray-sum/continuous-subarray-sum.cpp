class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> mp;
        mp[0] = -1;  // important: handles subarray starting from index 0
        
        int prefix = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i];
            
            int rem = prefix % k;
            
            if (mp.find(rem) != mp.end()) {
                if (i - mp[rem] > 1) return true; // length >= 2
            } else {
                mp[rem] = i; // store first occurrence only
            }
        }
        
        return false;
    }
};