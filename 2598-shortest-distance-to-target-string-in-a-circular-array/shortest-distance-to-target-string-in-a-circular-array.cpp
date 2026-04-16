class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {

        int n = words.size();

        int min1 = -1;
        int i = startIndex;

        
        for(int step = 0; step < n; step++){
            if(words[i] == target){
                min1 = step;
                break;
            }
            i = (i + 1) % n;
        }

        int min2 = -1;
        i = startIndex;

        
        for(int step = 0; step < n; step++){
            if(words[i] == target){
                min2 = step;
                break;
            }
            i = (i - 1 + n) % n;
        }

        if(min1 == -1 && min2 == -1){
            return -1;
        }

        if(min1 == -1) return min2;
        if(min2 == -1) return min1;

        return min(min1, min2);
    }
};