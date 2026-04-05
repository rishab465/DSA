class Solution {
public:
    bool judgeCircle(string s) {
        int n = s.length();
        int left = 0;
        int right = 0;
        int up = 0;
        int down = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='U'){
                up++;
            }
            if(s[i]=='D'){
                down++;
            }
            if(s[i]=='L'){
                left++;
            }
            if(s[i]=='R'){
                right++;
            }
        }
        if(left == right && up == down){
            return true;
        }
        return false;
    }
};