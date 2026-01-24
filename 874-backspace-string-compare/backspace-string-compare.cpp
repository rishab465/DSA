class Solution {
public:

    string usingstack (string s){
        int n = s.length();
        stack<char> st;
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i] == '#'){
                if(!st.empty()) st.pop();
            }else{
                st.push(s[i]);
            }
            
        }
        
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }

    bool backspaceCompare(string s, string t) {
        if(usingstack(s) == usingstack(t)) return true;
        else return false;
    }
};