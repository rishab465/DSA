class Solution {
public:
    int minimumDistance(vector<int>& nums) {
    unordered_map<int, pair<int,int>> mp;
    int mn = INT_MAX;

    for(int k = 0; k < nums.size(); k++) {
        int val = nums[k];

        if(mp.find(val) != mp.end()) {
            int i = mp[val].first;
            int j = mp[val].second;

            // we already have two previous occurrences
            if(i != -1) {
                int ans = 2 * (k - i);
                mn = min(mn, ans);
            }

            // shift window
            mp[val] = {j, k};
        } 
        else {
            mp[val] = {-1, k};
        }
    }

    return mn == INT_MAX ? -1 : mn;
}
    
};