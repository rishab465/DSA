class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // 1. find breakpoint
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        // 2. if breakpoint exists
        if (i >= 0) {
            int j = n - 1;

            // find next greater element
            while (nums[j] <= nums[i]) {
                j--;
            }

            swap(nums[i], nums[j]);
        }

        // 3. reverse right part
        reverse(nums.begin() + i + 1, nums.end());
    }
};