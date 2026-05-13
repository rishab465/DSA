class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int j = n-1;
        int ans = 0;
        int i=0;
        while(i<j){
            int mn = min(height[i] , height[j]);
            int cox = mn*(j-i);
            ans = max(ans , cox);
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }

        }
        return ans;
    }
};