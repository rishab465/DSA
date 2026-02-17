class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int n = num_people;
        vector<int>ans(n , 0);
        int push = 1;
        bool khtm = false;
        for(int i=0;i<n*n;i++){
            int k = i % n;
            ans[k] += push;
            if(khtm){
                break;
            }
            candies = candies-push;

            if(push<candies){
                
                push += 1; 
                
            }else{
                push = candies;
                khtm = true;
            }
            
        }
        return ans;
    }
};