class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        unordered_map<char , int> map;
        queue<int> q;

        for(int i=0;i<n;i++){

            if(map.find(s[i]) == map.end()){
                q.push(i);
            }

            map[s[i]]++;

            while(!q.empty() && map[s[q.front()]] > 1){
                q.pop();
            }

        }
        return q.empty()? -1 : q.front();
    }
};