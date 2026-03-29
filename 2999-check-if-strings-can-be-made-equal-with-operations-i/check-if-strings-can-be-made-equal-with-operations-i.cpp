class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
            if(s1==s2) return true;
        
            swap(s2[0] , s2[2]);
            if(s1 == s2){
                return true;
            }else{
                swap(s2[0] , s2[2]);
            }
            swap(s2[1] , s2[3]);
            //
            if(s1 == s2){
                return true;
            }else{
                swap(s2[1] , s2[3]);
            }
            //
            swap(s2[0] , s2[2]);
            swap(s2[1] , s2[3]);
            if(s1 == s2){
                return true;
            }else{
                return false;
            }
    }
};