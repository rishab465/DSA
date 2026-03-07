class Solution {
public:
    void reverse(vector<char> &s, int n , int m){
        if(n>=m) return ;

        swap(s[n] , s[m]);

        reverse(s, n+1 , m-1);
    }
    void reverseString(vector<char>& s) {

        reverse(s, 0 ,s.size()-1);
       
        
    }
};