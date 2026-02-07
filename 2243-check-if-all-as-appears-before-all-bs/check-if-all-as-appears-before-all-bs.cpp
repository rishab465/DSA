class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        bool ghanti = false;
        for(int i=0;i<n;i++){
            if(s[i] == 'b'){
                ghanti = true;
            }
            if(ghanti){
                if(s[i] == 'a'){
                    return false;
                }
            }
        }
        return true;
    }
};