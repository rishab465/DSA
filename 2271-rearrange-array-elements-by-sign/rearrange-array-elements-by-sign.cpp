class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        // sort(pos.begin() , pos.end());
        // sort(neg.begin() , neg.end());
        vector<int>ans;
        int i = 0;
        

        while(i<pos.size() ){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
            i++;
        }

        return ans;

    }
};