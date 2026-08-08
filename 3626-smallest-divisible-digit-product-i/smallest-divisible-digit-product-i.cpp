class Solution {
public:
    int smallestNumber(int n, int t) {
        int i = n;
        bool done = false;
        
        int ans = 0;
        while(!done){
            int num = n;
            int pro = 1;
            while(num!=0){
                int dig = num % 10;
                pro *= dig;
                num /= 10;
            }

            if(pro % t == 0 ){
                return n;
            }

            n++;
            
            
        }
        return 0;
    }
};