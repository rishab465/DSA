class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int ans1 = -1;
        int cnt = 0;
        for(int i=startIndex;i<n+startIndex;i++){
            int idx = i % n;
            
            if( words[idx] == target ){
                ans1 = cnt;
                break;
            }
            cnt++;
        }
        int ans2 = -1;
        int i = startIndex;
        int count = 0;
        while(count<n){
            int idx = (i+n) % n;
            
            if(words[idx] == target){
                
                ans2 = count;
                break;
            }
            count++;
            i--;
            

        }
        if(ans1 == -1 && ans2 == -1){
            return -1;
        }else{
            return min(ans1 , ans2);
        }
    }
};