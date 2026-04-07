class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n , vector<int>(n,0));
        int srow = 0;
        int erow = n-1;
        int scol = 0;
        int ecol = n-1;
        int m = n*n-1;
        int ins = 1;

        while(srow<=erow && scol <=ecol){
            for(int i=scol;i<=ecol;i++){
                mat[srow][i] = ins;
                ins++;
            }

            for(int i=srow+1;i<=erow;i++){
                mat[i][ecol] = ins;
                ins++;
            }
            
            for(int i=ecol-1;i>=scol;i--){
                mat[erow][i] = ins;
                ins++;
            }
            if(srow<erow){
                for(int i=erow-1;i>srow;i--){
                mat[i][scol] = ins;
                ins++;
            }
            }
            
            srow++;
            erow--;
            scol++;
            ecol--;

        }

        return mat;



    }
};