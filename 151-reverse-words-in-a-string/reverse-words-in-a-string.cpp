class Solution {
public:
    string reverseWords(string s) {
    
    int n = s.length();
    reverse(s.begin() , s.end());
    string result = "";
    for(int i=0;i<n;i++){
        string ans = "";
        if (s[i] == ' ') continue;
        while(i<n && s[i] != ' '){
            ans += s[i];
            i++;
        }
        reverse(ans.begin() , ans.end());
        result += ' ' + ans;
    }
    return result.substr(1);
        
    }
};