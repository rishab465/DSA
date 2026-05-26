class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n  = word.size();
        int count = 0;
        unordered_set<char>st;
        unordered_set<char>st1;

        for(int i=0;i<n;i++){
            if(word[i] >= 'A' && word[i]<='Z'){
                st.insert(word[i]);
            }else{
                st1.insert(word[i]);
            }
        } 
        

        for(auto it:st){
            if(st1.find(it + 32) != st1.end()){
                count++;
            }
        }

        return count;
    }
};