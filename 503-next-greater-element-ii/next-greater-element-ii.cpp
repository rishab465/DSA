class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        vector<int>ans(n,-1);
        int mx = *max_element(nums.begin() , nums.end());
        for(int i=2*n-1;i>=0;i--){
            int num = nums[i%n];
            while(!st.empty() && num >= st.top()){
                st.pop();
            }
            if(i<n){
                if(!st.empty()){
                
                ans[i] = st.top();

            }
            }
            
            st.push(num);
        }

        return ans;
    }
};