class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n = nums2.size()-1;
        stack<int> st;
        unordered_map<int,int> map;
        for(int i=n;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i] ){
                st.pop();
            }

            if(!st.empty()){
               map[nums2[i]] = st.top();
            }else{
                map[nums2[i]] = -1;
            }


            st.push(nums2[i]);

        }

        int m = nums1.size();

        for(int i=0;i<m;i++){
             nums1[i] = map[nums1[i]];
        }

        return nums1;
        
    }
};
