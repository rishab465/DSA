class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        string str(n,' ');
        string str1(n,' ');
        bool add = true;
        for(int i=0;i<n;i++){
            if(add){
                str[i] = '0';
                str1[i] = '1';
                add = false;
                
            }else{
                str[i] ='1';
                str1[i] ='0';
                add = true;
                
            }
        }

        int ans = 0;
        int ans1 = 0;

        for(int i=0;i<n;i++){
            if(s[i]!=str[i]){
                ans++;
            }
            if(s[i]!=str1[i]){
                ans1++;
            }
        }

        int mn = min(ans , ans1);
        return mn;


    }
};