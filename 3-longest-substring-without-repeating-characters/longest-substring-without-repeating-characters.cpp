class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int mx = 0;
        int left = 0;
        unordered_set<int>st;
        for(int i=0;i<n;i++){

            while(st.find(s[i])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            mx = max(mx , i-left+1);
        }
        return mx;
        
    }
};