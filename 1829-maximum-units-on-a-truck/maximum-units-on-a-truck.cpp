class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();

        sort(boxTypes.begin() , boxTypes.end() , [] (vector<int>&a , vector<int>&b){
            return a[1] > b[1];
        });
        int count = 0;
        int ans = 0;
        int full = 0;
        for(int i=0;i<n;i++){
            
            
            for(int j=1;j<=boxTypes[i][0];j++){
                count++;
                ans += boxTypes[i][1];
                if(count <= truckSize){
                    full = ans;
                }
            }

        }
        return full;
    }
};