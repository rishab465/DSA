class Solution {
public:
    int binaryGap(int n) {
        string str = "";

        while(n!=0){
            int digit = n%2;
            str += to_string(digit);
            n/=2;
        }
        reverse(str.begin() , str.end());
        bool isOne = false;
        bool addon = false;
        int ans = 0;
        int count = 0;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == '1'){
                if(isOne){
                    ans = max(ans, count + 1);  // +1 gives distance
                }
                isOne = true;
                count = 0;
            }
            else if(isOne){
                count++;
            }
        }
        return ans;
    }
};