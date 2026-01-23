class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int num = target.size();
        vector<string> ch;
        string s = "Push";
        string m = "Pop";
        int x = 0;
        for(int i=1;i<=n && x<num;i++){
            if(target[x] == i){
                ch.push_back(s);
                x++;
            }else{
                ch.push_back(s);
                ch.push_back(m);
            }
        }
        return ch;
    }
};