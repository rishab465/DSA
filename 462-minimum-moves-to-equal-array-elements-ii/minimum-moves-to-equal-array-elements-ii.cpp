class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int med = nums[n/2];
        int moves = 0;
        for(int i=0;i<n;i++){
            moves += abs(med - nums[i]);
        }

        return moves;
        


    }
};