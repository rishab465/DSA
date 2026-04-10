class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i] == nums[j] && nums[j] == nums[k]){
                        int ans = abs(j-i) + abs(k-i) + (k-j);
                        mn = min(mn , ans);
                    }
                }
            }
        }
        if(mn == INT_MAX){
            return -1;
        }else{
            return mn;
        }
        
    }
};