class Solution {
public:
    bool hasAlternatingBits(int n) {
        string str = "";
        while(n!=0){
        int decimal =  n % 2;
        str += to_string(decimal);
        n /=2;
     }
     reverse(str.begin() , str.end());

     bool flws = true;
     for(int i=1;i<str.length();i++){
       if(str[i-1] == str[i] ){
        return false;
       }
     }

     return true;

    }
};