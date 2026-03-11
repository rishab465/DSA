class Solution {
public:
    int findComplement(int n) {
        if(n==0) return 1;
        string bit = "";

        while(n!=0){
            int rem = n%2;
            bit += to_string(rem);
            n/=2;
        }
        
        reverse(bit.begin() , bit.end());

        for(int i=0;i<bit.length();i++){
            if(bit[i]=='0'){
                bit[i]='1';
            }else{
                bit[i]='0';
            }
        }

        int value = 0;
        for(int i=0;i<bit.length();i++){
            value = value * 2 + (bit[i]-'0');

        }

        return value;

    }
};