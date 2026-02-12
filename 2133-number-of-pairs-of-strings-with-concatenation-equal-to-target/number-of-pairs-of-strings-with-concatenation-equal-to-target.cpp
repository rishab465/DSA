class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n =nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i){
                    string str = nums[i] + nums[j];
                    if(str == target){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};