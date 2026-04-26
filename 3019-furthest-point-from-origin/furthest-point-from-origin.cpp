class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.length();
        int left = 0;
        int right = 0;
        for(int i=0;i<n;i++){
            if(moves[i] == 'L'){
                left++;
            }
            if(moves[i]=='R'){
                right++;
            }
        }

        if(left>right){
            for(int i=0;i<n;i++){
                if(moves[i]=='_'){
                    moves[i] = 'L'; 
                }
            }
        }else{
            for(int i=0;i<n;i++){
                if(moves[i]=='_'){
                    moves[i] = 'R'; 
                }
            }
        }
        int pos = 0;
        for(int i=0;i<n;i++){
            if(moves[i] == 'L'){
                pos-=1;
            }else{
                pos +=1;

            }
        }
        return abs(pos);
    }
};