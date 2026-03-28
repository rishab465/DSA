class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st(nums.begin() , nums.end());
        int smallest = 1;
        
        while(true){
            if(st.find(smallest) == st.end()){
                return smallest;
            }
            smallest++;
        }
    }
};