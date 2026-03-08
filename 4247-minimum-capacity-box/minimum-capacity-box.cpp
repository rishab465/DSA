class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n = capacity.size();
        int mn = INT_MAX;
        int index = -1;
        for(int i=0;i<n;i++){
            if(capacity[i] >= itemSize){
                if(capacity[i] - itemSize < mn){
                    mn = capacity[i]-itemSize;
                    index = i;
                }
            }
        }
        return index;
    }
};