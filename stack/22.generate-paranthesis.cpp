class Solution {
public:
    void solve(int open, int close, int n, vector<string> &op, string str) {
        if(open == n && close == n) {
            op.push_back(str);
            return;
        }
        if(open < n)
            solve(open + 1, close, n, op, str + "(");
        if(close < open)
            solve(open, close + 1, n, op, str + ")");
    }
    vector<string> generateParenthesis(int n) {
        vector<string> op;
        solve(0, 0, n, op,"");
        return op;
    }
};