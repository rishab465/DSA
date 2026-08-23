class Solution {
public:




    bool isPalindrome(string s) {
        int n = s.length();

        int left = 0;
        
        string str = "";
        for(int i=0;i<n;i++){
            if(!isalnum(s[i])) continue;
            str += tolower(s[i]); 
        }
        int right = str.length()-1;
        while(left < right){
            
            
                if(str[left] != str[right]){
                return false;
            }
            

            left++;
            right--;
            
        }
        return true;
    }
};