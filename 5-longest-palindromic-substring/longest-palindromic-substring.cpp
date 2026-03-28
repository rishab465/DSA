class Solution {
public:

    bool pallindrome(int left , int right , string &s){
        int l = left;
        int r = right;

        while(l <= r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        if(n==1) return s;
        
        int mx = INT_MIN;
        string str = "";
        int stlen = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(pallindrome(i , j , s)){
                    if(j-i+1>mx){
                        mx = j-i+1;
                        stlen = i;
                         
                    }
                }
            }
        }
        str = s.substr(stlen , mx);
        return str;
    }
};