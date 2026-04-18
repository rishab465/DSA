class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int , int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<int>store;
        for(auto it:mp){
            store.push_back(it.second);
        }
        sort(store.begin(), store.end(), greater<int>());
        int sz = n/2;
        int sum = 0;
        for(int i=0;i<store.size();i++){
            sum += store[i];
        }
        for(int i=0;i<store.size();i++){
            sum -= store[i];
            if(sum <= sz){
                return i+1;
            }
        }
        return 0;
    }
};