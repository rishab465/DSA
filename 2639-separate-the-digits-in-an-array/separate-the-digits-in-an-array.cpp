class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();

        vector<int>result;

        for(int i=0;i<n;i++){
            vector<int> digits;
            while(nums[i] != 0){
                int rem = nums[i] % 10;
                digits.push_back(rem);
                nums[i] = nums[i] / 10;
            }

            reverse(digits.begin() , digits.end());
            for(int j=0;j<digits.size();j++){
                result.push_back(digits[j]);
            }
        }

        return result;

    }
};