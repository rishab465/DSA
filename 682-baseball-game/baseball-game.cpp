class Solution {
public:
    int calPoints(vector<string>& arr) {

        int n = arr.size();
        int ans = 0;
        stack<int> st;
        for(int i =0;i<n;i++){
            if(arr[i] == "+"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
               
                st.push(second);
                st.push(first);
                st.push((first + second));
            }else if(arr[i] == "D"){
                st.push(2*(st.top()));
            }else if(arr[i] == "C"){
                st.pop();
            }else {
                st.push(stoi(arr[i]));
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
    return ans;
        
    }
};