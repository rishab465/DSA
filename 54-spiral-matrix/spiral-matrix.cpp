class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int srow = 0;
        int ecol = m-1;
        int erow = n-1;
        int scol = 0;

        vector<int>ans;

        while(srow<=erow && scol <= ecol){
            for(int j = scol;j<=ecol;j++){
                ans.push_back(matrix[srow][j]);
            }
            for(int j = srow+1;j<=erow;j++){
                
                ans.push_back(matrix[j][ecol]);
            }
            for(int j = ecol-1;j>=scol;j--){
                if(srow==erow){
                    break;
                }
                ans.push_back(matrix[erow][j]);
            }
            for(int j= erow-1;j>srow;j--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(matrix[j][srow]);
            }
            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return ans;
    }
};