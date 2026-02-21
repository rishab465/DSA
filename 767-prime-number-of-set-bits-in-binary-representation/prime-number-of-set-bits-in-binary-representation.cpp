class Solution {
public:
    
    
    int countPrimeSetBits(int left, int right) {
        
        bool prime[21] = {false};
        prime[2] = prime[3]=prime[5]=prime[7]=prime[11]=prime[13]=prime[17]=prime[19] = true;
        int count = 0;
        for(int i=left;i<=right;i++){
            int set_bits = __builtin_popcount(i);
            if(prime[set_bits]){
                count++;
            }
        }
        return count;

    }
};