class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int j = 0;
        int mx = 0;
        unordered_set<char>st;
        for(int i=0;i<n;i++){

            

            while(st.find(s[i]) != st.end()){
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            mx = max(mx , i-j+1);
        }   

        return mx;
    }
};