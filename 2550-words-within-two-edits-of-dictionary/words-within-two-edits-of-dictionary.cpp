class Solution {
public:
    vector<string> twoEditWords(vector<string>& str, vector<string>& str1) {
        int n = str.size();
        int m = str1.size();
        int siz = str[0].length();
        vector<string> ans;

        for(int i=0;i<n;i++){
            string s = str[i];
            for(int j = 0;j<m;j++){
                int count = 0;
                string stri = str1[j]; 
                
                for(int k=0;k<siz;k++){
                    if(s[k] != stri[k]){
                        count++;
                    }
                    if(count>2) break;
                }
                if(count <= 2){
                    ans.push_back(str[i]);
                    break;
                }
            }
        }

        return ans;
        
    }
};