class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();
        string ans = "";
        for(int i=0;i<n;i++){
            string s = "";
            int count = 0;
            while(i<n && title[i] != ' '){
                s += title[i];
                count++;
                i++;
            }
            if(count < 3){
                ans += ' ';
                for(int j=0;j<s.length();j++){
                    ans += tolower(s[j]);
                }
            }else{
                ans += ' ' ;
                ans += toupper(s[0]) ;
                for(int j=1;j<s.length();j++){
                    ans += tolower(s[j]);
                }

            }

        }

        return ans.substr(1);
    }
};