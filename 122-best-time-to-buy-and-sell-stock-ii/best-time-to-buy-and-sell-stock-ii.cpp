class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;

        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                sum += arr[i] - arr[i-1];
            }
        }
        return sum;
    }
};