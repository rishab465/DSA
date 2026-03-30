class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int>st;
        unordered_set<int>st1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    st.insert(i);
                    st1.insert(j);
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(st.find(i) != st.end() ||st1.find(j) != st1.end()  ){
                    matrix[i][j] = 0;
                }
            }
        }

       


        
    }
};