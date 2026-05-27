class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char , int>mp;
        unordered_map<char , int>mp1;

        int n = word.size();
        int count = 0;
        for(int i=0;i<n;i++){
            if(islower(word[i])){
                mp[word[i]] = i;
            }else{
                if(mp1.find(word[i]) == mp1.end()){
                    mp1[word[i]] = i;
                }
            }
        }
        for(auto it : mp){
            int lower = it.first;
            int upper = toupper(it.first);

            if(mp1.find(upper) != mp1.end()){
                if(mp[lower] < mp1[upper]){
                    count++;
                }
            }
        }
        return count ;
    }
};