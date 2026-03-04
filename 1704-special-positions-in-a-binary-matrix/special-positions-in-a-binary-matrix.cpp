class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                int count = 0;

                if(mat[i][j]==1){

                    for(int k=0;k<m;k++){
                        if(mat[i][k]==1) count++;
                    }

                    for(int k=0;k<n;k++){
                        if(mat[k][j]==1 && k!=i) count++;
                    }
                }

                if(count==1) ans++;
            }
        }

        return ans;
    }
};