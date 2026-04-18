class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();

        unordered_map<int , int> mp;
        int j = 0;
        int count = 0;
        int mx = 0;
        for(int i=0;i<n;i++){
            mp[fruits[i]]++;
            while(mp.size() > 2){
                mp[fruits[j]]--;
                
                if(mp[fruits[j]] == 0){
                    mp.erase(fruits[j]);
                }
                j++;
            }
            
            mx = max(mx , i-j+1);

        }
        return mx ;
    }
};