class Solution {
public:
int atmost(vector<int>& nums, int k){
    int n = nums.size();
        int j = 0;
        int mx = 0;
        unordered_map<int , int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp.size()>k){
                
                mp[nums[j]]--;

                if(mp[nums[j]] == 0){
                    mp.erase(nums[j]);
                }
                j++;
            }
            
            mx += i-j+1;
        }
        return mx;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums , k) - atmost(nums , k-1);
    }
};