class Solution {
public:
   map<string,int> Track;
int n;
string ans;
bool isPresent=false;
vector<char> binary;
void generate(int i,string check){
    if(i==n){
        if(!Track.count(check)){
            ans=check;
            isPresent=true;
        }
        return;
    }
    for(auto &ch:binary){
        if(isPresent)return;
        check+=ch;
        generate(i+1,check);
        check.pop_back();
        if(isPresent)return;
    }
}
    string findDifferentBinaryString(vector<string>& nums) {
        n=nums.size();
        Track.clear();
        binary.clear();
        binary.push_back('0');
        binary.push_back('1');
        for(auto &i:nums)Track[i]=1;
        generate(0,ans);
        return ans;
    }
};