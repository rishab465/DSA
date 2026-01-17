class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int , int> map;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int answer = target - nums[i];
            if(map.find(answer) != map.end()){
                result.push_back(map[answer]);
                result.push_back(i);
                return result;
            }
            map[nums[i]] = i;
        }

        return {};
    }
};