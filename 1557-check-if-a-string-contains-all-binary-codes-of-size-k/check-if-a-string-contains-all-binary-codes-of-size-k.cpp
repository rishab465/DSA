class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        int n = s.length();

        unordered_set<string>set;

        for(int i = 0;i<=n-k;i++){
            set.insert(s.substr(i,k));
        }

        if(set.size()>=pow(2,k)){
            return true;
        }else{
            return false;
        }


    }
};