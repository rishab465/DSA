class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        int count =0;
        int countb = 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'b'){
                countb++;
            }else {
                count = min(count + 1 , countb);
            }
            
            }
        
        return count;
    }
};