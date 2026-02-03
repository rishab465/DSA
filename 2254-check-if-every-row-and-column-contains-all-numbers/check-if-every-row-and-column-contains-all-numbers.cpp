class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        

        int n = matrix.size();
        
        for(int i=0;i<n;i++){
            unordered_set<int> set;
            for(int j=0;j<n;j++){
                if(set.find(matrix[i][j])!= set.end()){
                    return false;
                }
                set.insert(matrix[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            unordered_set<int> set;
            for(int j=0;j<n;j++){
                if(set.find(matrix[j][i])!= set.end()){
                    return false;
                }
                set.insert(matrix[j][i]);
            }
        }
        return true;

    }
};