class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> transform(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                transform[i][j] = matrix[j][i];
            }
        }

        for(int i=0;i<n;i++){
            int left = 0;
            int right = n-1;
            while(left < right){
                swap(transform[i][left] , transform[i][right]);
                left++;
                right--;
            }
            
        }
        matrix = transform;
    }
};