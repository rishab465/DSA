class Solution {
public:
    vector<vector<int>>global;

    void backtrack(vector<int> nums , int i , int n , vector<int>temp){
        if(i==n){
            global.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        backtrack(nums , i+1,n,temp);
        temp.pop_back();
        backtrack(nums, i+1,n,temp);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        backtrack(nums , 0 , n,temp);
        return global;

        
    }
};