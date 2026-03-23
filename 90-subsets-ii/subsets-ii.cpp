class Solution {
public:
    vector<vector<int>> ans;
    void genSub(vector<int>& nums , int i , vector<int>& res){
        if(i>=nums.size()){
            ans.push_back(res);
            return;
        }
        res.push_back(nums[i]);
        genSub(nums , i+1 , res);

        res.pop_back();
        int idx = i+1;
        while(idx<nums.size() && nums[idx] == nums[idx-1]){
            idx++;
        }
        genSub(nums , idx , res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        vector<int> res;
        genSub(nums , 0 , res );

        return ans;


  }
};