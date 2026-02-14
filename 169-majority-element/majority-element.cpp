class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int seize = n/2;
        unordered_map<int , int> map;
        for(int i=0;i<n;i++){

            map[nums[i]]++;


            

        }

        for(auto it:map){
            if(it.second>seize){
                return it.first;
            }
        }

        return -1;
        
    }
};