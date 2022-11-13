class Solution {
public:
    string reverseWords(string s) {
       stringstream str(s);
        string ans,words="";
        while(str>> words)
            ans = words+" "+ans;
        ans.pop_back();
        return ans;
    }
};