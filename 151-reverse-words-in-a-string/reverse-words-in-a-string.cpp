class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin() , s.end());
        int n = s.length();
        string str = "";
        for(int i=0;i<n;i++){
            string s1 = "";
            if(s[i] == ' ') continue;
            while(i<n && s[i] != ' '){
                s1 += s[i];
                i++;
            }
            reverse(s1.begin() , s1.end());
            str += ' ' + s1 ;


        }
        return str.substr(1);
    }
};