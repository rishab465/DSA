class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++; 
        }

        for(int i=0;i<t.length();i++){
            mp1[t[i]]++; 
        }

       return mp == mp1;
        
    }
};