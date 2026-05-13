class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";

        for(int i=0;i<s.length();i++){

            if(isalnum(s[i])){
                s1 += tolower(s[i]);
            }


        }

        int left = 0;
        int right = s1.length()-1;

        while(left <= right){
            if(s1[left] != s1[right]){
                return false;
            }
            left++;
            right--;
        }


        return true;
    }
};