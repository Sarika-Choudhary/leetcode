class Solution {
public:
    void solve(int i, int target, vector<int>& arr,
               vector<int>& curr, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(curr);
            return;
        }
        if (i == arr.size() || arr[i] > target)
            return;
        curr.push_back(arr[i]);
        solve(i + 1, target - arr[i], arr, curr, ans);
        curr.pop_back();
        int next = i + 1;
        while (next < arr.size() && arr[next] == arr[i])
            next++;
        solve(next, target, arr, curr, ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        solve(0, target, candidates, curr, ans);
        return ans;
    }
};
/*Intuition: Sort the array so duplicates are adjacent, then use backtracking to generate combinations while moving to `i + 1` so each element is used only once, and skip duplicates at the same recursion level to avoid duplicate combinations.

Approach:For every candidate, add it to the current combination, recursively search for the remaining target, then backtrack by removing it; when the target becomes `0`, store the combination.

TC:`O(2^n × n)` in the worst case, including the cost of copying each valid combination, plus `O(n log n)` for sorting.

SC: `O(n)` auxiliary space for the recursion stack and current combination, excluding the result space.
*/