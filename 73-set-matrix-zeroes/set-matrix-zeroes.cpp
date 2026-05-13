class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> set;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    set.insert(i);
                    st.insert(j);
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(set.find(i) != set.end() || st.find(j) != st.end()){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};