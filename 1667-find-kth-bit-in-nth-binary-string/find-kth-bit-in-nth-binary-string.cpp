class Solution {
public:

    string reverseinvert(string s){
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                s[i]='1';
            }else{
                s[i]='0';
            }
        }
        reverse(s.begin() , s.end());
        return s;
    }

    string formstring(int n){
        if(n==1) return "0";

        string prev = formstring(n-1);
        string temp = reverseinvert(prev);
        return prev + "1" + temp;
    }

    char findKthBit(int n, int k) {

        string str = formstring(n);
        
        return str[k-1];
        
    }
};