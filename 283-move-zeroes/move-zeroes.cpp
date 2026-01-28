class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i =0;i<n;i++){
            if(nums[i] != 0){
                ans.push_back(nums[i]);
            }

        }
        int i=0;
        while(i < ans.size()){
            nums[i] = ans[i];
            i++;
        }
        int j = i;
        while(j<n){
            nums[j] = 0;
            j++;
        }
    
        
    }
};