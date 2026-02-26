class Solution {
public:

    int atMostK(vector<int>nums , int k){

        int n = nums.size();
        int ans = 0;
        int j = 0;
        unordered_map<int , int>mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp.size() > k){
                mp[nums[j]]--;
                if(mp[nums[j]]==0){
                    mp.erase(nums[j]);
                }
                j++;
            }

            ans += i-j+1;
        }
        return ans;

    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        

       return atMostK(nums , k) - atMostK(nums , k-1);
        
    }
};