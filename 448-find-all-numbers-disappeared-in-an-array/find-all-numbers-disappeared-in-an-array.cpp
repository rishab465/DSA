class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int>st(nums.begin() , nums.end());
        int smallest = 1;
        vector<int>ans;
        int i = 0;
        while(i<nums.size()){
            if(st.find(smallest) == st.end()){
                ans.push_back(smallest);
            }
            smallest++;
            i++;
        }
        return ans;
    }
};