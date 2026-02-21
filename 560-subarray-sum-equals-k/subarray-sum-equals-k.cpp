class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<long long> prefix(n+1);
        prefix[0] = 0; 
        
        for(int i = 1; i <= n; i++){
            prefix[i] = prefix[i-1] + nums[i-1];
        }

        int count = 0;
        unordered_map<long long,int> mp;
        mp[0] = 1;   
        
        for(int j = 1; j <= n; j++){
            long long val = prefix[j] - k;

            if(mp.find(val) != mp.end()){
                count += mp[val];
            }

            mp[prefix[j]]++;
        }

        return count;
    }
};