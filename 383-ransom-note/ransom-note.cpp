class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.length();

        unordered_map<char , int>map;

        for(int i=0;i<n;i++){
            map[ransomNote[i]]++;

        }
        for(int i=0;i<magazine.length();i++){
            if(map.find(magazine[i]) != map.end()){
                map[magazine[i]]--;
                if(map[magazine[i]]==0){
                    map.erase(magazine[i]);
                }
            }
        }
        if(map.empty()){
            return true;
        }else{
            return false;
        }
    }
};