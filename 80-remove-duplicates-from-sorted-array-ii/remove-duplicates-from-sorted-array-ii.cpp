class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
         int ans = 0;
        unordered_map<int , int> map;
        int count = n;
        for(int i=0;i<n;i++){
            map[nums[i]]++;

            
                if(map[nums[i]]>2){
                    nums[i] = INT_MAX;
                    count--;
                }
            
        }
        sort(nums.begin(),nums.end());
        return count;
    }
};
