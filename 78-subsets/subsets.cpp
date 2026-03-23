class Solution {
public:
    vector<vector<int>>ans;

    void genSub(vector<int>& nums , int i , vector<int> result ){
        if(i>=nums.size()){
            ans.push_back(result);
            return;
        }
        result.push_back(nums[i]);
        genSub(nums , i+1 , result);


        result.pop_back();
        genSub(nums , i+1 , result );



    }


    vector<vector<int>> subsets(vector<int>& nums) {
       int n = nums.size();
       vector<int>result;
       genSub(nums , 0 , result);

       return ans;

    }
};