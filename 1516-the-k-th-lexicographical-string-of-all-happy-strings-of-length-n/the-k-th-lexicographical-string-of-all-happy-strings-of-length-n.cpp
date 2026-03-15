class Solution {
    void func(vector<string> &ans, string &temp, int n) {
        if (temp.size() == n) {
            ans.push_back(temp);
            return;
        }

        for (char ch = 'a'; ch <= 'c'; ch++) {
            if (temp.empty() || temp.back() != ch) {
                temp.push_back(ch);
                func(ans, temp, n);
                temp.pop_back();
            }
        }
    }

public:
    string getHappyString(int n, int k) {
        vector<string> ans;
        string temp = "";

        func(ans, temp, n);

        sort(ans.begin(), ans.end());

        if (ans.size() < k) return "";
        return ans[k - 1];
    }
};