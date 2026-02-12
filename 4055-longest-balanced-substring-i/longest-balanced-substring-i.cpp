class Solution {
public:
    int longestBalanced(string s) {
        int n = s.length();
        int mx = 0;
        for(int i=0;i<n;i++){
            unordered_map<char , int> mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
            int firstValue = mp.begin()->second;
            bool valid = true;
            for(auto it : mp){
                if(it.second != firstValue ){
                    valid = false;
                }
            }

            if(valid){
                mx = max(mx , j-i+1);
            }
            }
            


        }
        return mx;
    }
};