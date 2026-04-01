class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            unordered_set<char>st;
            for(int j=i;j<n;j++){
                

                if(st.find(s[j]) != st.end()){
                    mx = max(mx , j-i);
                    break;
                }
                st.insert(s[j]);
                mx = max(mx , j-i+1);
            }
        }
        if(mx == INT_MIN){
            return n;
        }else{
            return mx;
        }
        
    }
};