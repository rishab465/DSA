class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.length();
        int countzero = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                countzero++;
            }else {
                count = min(count+1 , countzero);
            }
        }
        return count;
    }
};