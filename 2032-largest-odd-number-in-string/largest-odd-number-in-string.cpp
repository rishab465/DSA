class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        bool throwempty = false;
        string ans = "";
        for(int i=n-1;i>=0;i--){
            int check = num[i]-'0';
            if(check % 2 != 0 ){
                throwempty = true;
                ans =  num.substr(0,i+1);
                break;
            }
        }
        return ans;
    }
};