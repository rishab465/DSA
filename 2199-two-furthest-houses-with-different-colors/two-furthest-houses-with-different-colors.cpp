class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int ans = 0;
        int i=0;
        int j = n-1;
        while(i<j){
            if(colors[i] != colors[j]){
                ans = max(ans,j-i);
                j--;
            }else{
                j--;
            }
        }
        int ans1 = 0;
        int k = 0;
        int l = n-1;
        while(k<l){
            if(colors[k] != colors[l]){
                ans1 = max(ans1 , l-k);
                k++;
            }else{
                k++;
            }
        }
        

        return max(ans , ans1);
    }
};