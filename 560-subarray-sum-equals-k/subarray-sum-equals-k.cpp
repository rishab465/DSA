class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int , int> mp;
        int prefix = 0;
        int ans = 0;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            prefix += nums[i];

            int val = prefix - k;
            if(mp.find(val) != mp.end()){
                ans += mp[val];
            }

            mp[prefix]++;

        }
        return ans;
    }
};