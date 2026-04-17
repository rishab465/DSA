class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n,0);
        
        for(int i=0;i<n;i++){
            //for more than k
            if(k>0){
                int answ = 0;
                for(int j=i+1;j<=i+k;j++){
                    int idx = j%n;
                    
                    answ += code[idx];
                }
                ans[i] = answ;
             }

            //  for less than k
              else if(k < 0){
                int sum = 0;
                for(int j = i-1; j >= i+k; j--){
                    sum += code[(j % n + n) % n];
                }
                ans[i] = sum;
            }
        }
        return ans;
    }
};