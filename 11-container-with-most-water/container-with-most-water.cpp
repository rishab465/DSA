class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int left = 0;
        int right = n-1;
        int mxar = 0;
        while(left < right){
            int len = min(height[left] , height[right]);
            int breadth = right - left ;

            mxar = max(mxar , len*breadth);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return mxar;
    }
};