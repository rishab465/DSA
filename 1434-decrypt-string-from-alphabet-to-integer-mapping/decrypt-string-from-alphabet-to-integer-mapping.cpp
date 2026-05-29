class Solution {
public:
    string freqAlphabets(string s) {
        int n = s.length();
        string ans = "";
        for(int i=n-1;i>=0;i--){
            if(s[i] == '#'){
                string str = "";
                str += s[i-2];
                str += s[i-1];
                
                char cha = 'a' + stoi(str) - 1;
                ans += cha;
                i-=2;
            }else{
                char ch = 'a' + (s[i]-'0') - 1;
                ans += ch;
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};