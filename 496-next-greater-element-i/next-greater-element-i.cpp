class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int>st;

        unordered_map<int , int>mp;

        int n = nums2.size();

        for(int i=n-1;i>=0;i--){

            while(!st.empty() && st.top() <= nums2[i] ){
                st.pop();
            }

            if(!st.empty()){
                mp[nums2[i]] = st.top();
            }else{
                mp[nums2[i]] = -1;
            }

            st.push(nums2[i]);

        }

        for(int i=0;i<nums1.size();i++){
            nums1[i] = mp[nums1[i]];
        }

        return nums1;
        
        
    }
};