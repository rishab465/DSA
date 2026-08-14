class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        int add = 0;
        for(int i=0;i<n;i++){
            

            if(add < i){
                return false;
            }
            add = max(add , nums[i]+i);
        }

        return true;
    }
};