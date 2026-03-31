class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int rest = n/3;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for (auto &p : mp) {
            if(p.second>rest){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};