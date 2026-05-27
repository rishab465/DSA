class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int n = arr.size();
        double mx = 0;
    double sum = 0;
    for(int i=0;i<k;i++){
         sum += arr[i];
         mx += arr[i];
         
        
    }
    for(int i=k;i<n;i++){
        sum -= arr[i-k];
        sum += arr[i];
        mx = max(mx , sum);
    }
    return mx/k;
    }
};