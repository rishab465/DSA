class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            int ans = nums[i];
            if(ans>0 && l==1 ){
                    mn = min(mn , ans);
                }
            for(int j=i+1;j<n;j++){

                ans += nums[j];

                if(ans>0 && j-i+1>=l && j-i+1<=r){
                    mn = min(mn , ans);
                }

            }
        }
        if(mn==INT_MAX){
            return -1;
        }else{
            return mn;
        }
        
    }
};