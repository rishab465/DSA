class Solution {
public:

    bool holds(string s){
        bool init = false;
        bool end = true;
        if(s[0] >= 'A' && s[0] <= 'Z'){
            init = true;
        }

        for(int i=1;i<s.length();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                end = false;
                break;
            }
        }
        if(init && end){
            return true;
        }else{
            return false;
        }
    }

    bool detectCapitalUse(string word) {
        int n = word.size();
        int indicator = 0;
        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z'){
                indicator++;
            }
        }

        if(indicator == n || holds(word) || indicator == 0){
            return true;
        }else{
            return false;
        }
    }
};