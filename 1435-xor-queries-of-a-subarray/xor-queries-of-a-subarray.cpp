class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> prefixor(arr.size());
        vector<int>result;
        prefixor[0] = arr[0];
        for(int i=1;i<arr.size();i++){
            prefixor[i] = arr[i]^prefixor[i-1];
        }

        for(int i=0;i<n;i++){
            int l = queries[i][0];
            int r = queries[i][1];

            if(l==0){
                result.push_back(prefixor[r]);
            }else{
                result.push_back(prefixor[r]^prefixor[l-1]);
            }
        }
        return result;
    }
};