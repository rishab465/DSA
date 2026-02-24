class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n = nums.size();
       int ans = 0;
       
    for(int i=0;i<n;i++){

        if(nums[i]==0){
            nums[i] = -1;
        }




    }


    unordered_map<int,int>mp;
    int mx = 0;
    int val =0;
    mp[0] = -1;
    for(int i=0;i<n;i++){

         val += nums[i];

        if(mp.find(val)!=mp.end()){
            mx = max(mx , i-mp[val]);
        }else{
            mp[val] = i;
        }









    }

    return mx;
       
       
    }
};