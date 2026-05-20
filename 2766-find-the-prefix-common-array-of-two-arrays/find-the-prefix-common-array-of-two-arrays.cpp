class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_set<int> st;
        vector<int> ans;
        for(int i=0;i<n;i++){
            int count = 0;
            st.insert(B[i]);
            for(int j=0;j<=i;j++){
                
                if(st.find(A[j]) != st.end()){
                    count++;
                }
                
            }
            ans.push_back(count);
        }
        return ans;
    }
};