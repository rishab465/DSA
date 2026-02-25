class Solution {
public:


    int square(int n ){
        int ans = 0;
        while(n!=0){
            int digit = n%10;
            ans += digit * digit;
            n /=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n!=1){
            n = square(n);

            if(st.find(n) != st.end()){
                return false;
            }
            st.insert(n);
        }
        return true;
    }
};