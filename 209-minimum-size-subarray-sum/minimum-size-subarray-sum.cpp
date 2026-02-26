class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {


        int n = nums.size();

        int mx = INT_MAX;
        int sum = 0;
        int j = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            while(sum>=target){
                mx = min(mx , i-j+1);
                sum -= nums[j];
                j++;
               


            }

        }
        if(mx==INT_MAX){
            return 0;
        }else{
       return mx;

        }
        
    }
};