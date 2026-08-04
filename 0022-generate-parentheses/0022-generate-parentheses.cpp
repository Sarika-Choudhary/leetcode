class Solution {
public:
    void backtrack(int open, int close, int n, string curr, vector<string>& res) {
        if (curr.size() == 2 * n) {
            res.push_back(curr);
            return;
        }

        if (open < n)
            backtrack(open + 1, close, n, curr + "(", res);

        if (close < open)
            backtrack(open, close + 1, n, curr + ")", res);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(0, 0, n, "", res);
        return res;
    }
};