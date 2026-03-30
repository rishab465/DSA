class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.length();

        if(s1.length() != s2.length()) return false;

        unordered_map<char,char>mpeven;
        unordered_map<char,char>mpeven1;
        unordered_map<char,char>mpodd;
        unordered_map<char,char>mpodd1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                mpeven[s1[i]]++;
                mpeven1[s2[i]]++;
            
            }
            if(i%2!=0){
                mpodd[s1[i]]++;
                mpodd1[s2[i]]++;
            }
        }

        if(mpeven == mpeven1 && mpodd == mpodd1){
            return true;
        }else{
            return false;
        }
    }
};