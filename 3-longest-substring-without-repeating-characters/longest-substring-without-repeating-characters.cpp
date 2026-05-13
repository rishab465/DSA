class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int mx = 0;
        unordered_set<int> set;
        int j = 0;
        for(int i=0;i<n;i++){

            while(set.find(s[i]) != set.end() ){
                set.erase(s[j]);
                j++;
            }
        set.insert(s[i]);
        mx = max(mx , i-j+1);



        }
        return mx;
    }
};