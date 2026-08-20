class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr1;
        vector<int>arr2;

        // if(n<3){
        //     return nums;
        // }

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int i = 2;
        int j = 0;
        int k = 0;

        while(i<n){
            if(arr1[j] > arr2[k]){
                arr1.push_back(nums[i]);
                j++;
            }else{
                arr2.push_back(nums[i]);
                k++;
            }
            i++;
        }

        vector<int>result;
        for(int i =0;i<arr1.size();i++){
            result.push_back(arr1[i]);
        }
        for(int i =0;i<arr2.size();i++){
            result.push_back(arr2[i]);
        }

        return result;

    }
};