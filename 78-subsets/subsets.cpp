class Solution {
public:

    vector<vector<int>> result;

    void getAllSubsets(vector<int> nums ,vector<int> temp ,int i){
        
        if(i>=nums.size()){
            result.push_back(temp);
            return;
        }


        temp.push_back(nums[i]);
        getAllSubsets(nums , temp , i+1);
        
        temp.pop_back();
        getAllSubsets(nums , temp , i+1);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
       

       vector<int> temp;

       getAllSubsets(nums , temp , 0);


        return result;
       
    }
};
