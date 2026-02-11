class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.length();

        unordered_map<string , int> repeat;
        vector<string> result;
        for(int i=0;i<=n-10;i++){
            string temp = s.substr(i , 10);

            repeat[temp]++;

            if(repeat[temp] == 2){
                result.push_back(temp);
            }
        }
        return result;
    }
};