class Solution {
public:


    string build(string s){
        int n = s.length()-1;
        int count = 0;
        string ans = "";
        for(int i=n;i>=0;i--){
            if(s[i] == '#'){
                count++;
            }else if(count>0){
                count--;

            }else{
                ans+=s[i];
            }
        }
        return ans;
    }

    bool backspaceCompare(string s, string t) {
        if(build(s) == build(t)) return true;
        else return false;
    }
};