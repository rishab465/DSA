class Solution {
public:
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i=left;i<right+1;i++){
            int integer = i;
            string str="";
            while(integer!=0){
                int dig = integer%2;
                str += to_string(dig);
                integer/=2;
            }
            int num = 0;
            for(int j=0;j<str.length();j++){
                if(str[j]=='1'){
                    num++;
                }
            }
            
            if(isPrime(num)){
                count++;
            }
            
        }
        return count;
    }
};