class Solution {
public:
bool vowel(char ch){
    if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u')return true;


    return false;
}
    int maxVowels(string s, int k) {
        int n = s.length();
        int ct = 0;
        int mx = 0;
        for(int i = 0;i<k;i++){
            if(vowel(s[i])){
                ct++;
            }
        }
        mx = ct;
        for(int i=k;i<n;i++){
            if(vowel(s[i-k])) ct--;
            if(vowel(s[i])) ct++;

            mx = max(mx , ct);
        }
        return mx;
    }
};