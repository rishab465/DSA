class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans = s + s;
        if(s.length() != goal.length()) return false;
        int wind = goal.length();
        for(int i=0;i<ans.length();i++){
            if(ans.substr(i,wind) == goal){
                return true;
            }
        }

        return false;
    }
};