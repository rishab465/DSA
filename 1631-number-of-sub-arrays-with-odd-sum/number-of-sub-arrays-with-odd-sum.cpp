class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9 + 7;
        int sum = 0;
        int even = 1;
        int odd = 0;
       for(int i=0;i<n;i++){
        sum += arr[i];

        if(sum % 2==0){
            even++;
        }else{
            odd++;
        }
       }
        long long ans = (1LL * odd * even) % mod;
        return ans; 
    }
};