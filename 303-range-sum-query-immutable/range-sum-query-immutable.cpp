class NumArray {
public:
    vector<int> pref;

    NumArray(vector<int>& nums) {
        int n = nums.size();
        pref.resize(n);

        pref[0] = nums[0];
        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return pref[right];
        return pref[right] - pref[left-1];
    }
};