class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        int n = arr.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            int price = arr[i];
            while(!st.empty() && arr[i] < st.top() ){
                st.pop();
            }
            if(!st.empty()){
                arr[i] = price - st.top();
            }
            st.push(price);
        }
        return arr;
        
    }
};