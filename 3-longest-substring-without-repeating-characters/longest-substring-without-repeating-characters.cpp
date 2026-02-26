class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length();
        unordered_set<char>mp;
        int mx = 0;
        int left = 0;
        for(int i=0;i<n;i++){
            
          

            while(mp.find(s[i]) != mp.end()){
                mp.erase(s[left]);
                left++;
            }

             mp.insert(s[i]);

            mx = max(mx , i-left+1);

        }

        return mx;
        
    }
};