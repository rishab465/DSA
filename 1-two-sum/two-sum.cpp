class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        unordered_map<int , int> map;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int ch = target - nums[i];

            if(map.find(ch) != map.end()){
                ans.push_back(i);
                ans.push_back(map[ch]);
            }
            map[nums[i]] = i;
        }
        return ans;
    }
};