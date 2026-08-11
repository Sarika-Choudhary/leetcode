class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        map<int, vector<pair<int, int>>> mp;
        queue<tuple<TreeNode*, int, int>> q;
        q.push({root, 0, 0});
        while (!q.empty()) {
            auto [node, row, col] = q.front();
            q.pop();
            mp[col].push_back({row, node->val});
            if (node->left)
                q.push({node->left, row + 1, col - 1});
            if (node->right)
                q.push({node->right, row + 1, col + 1});
        }
        for (auto &x : mp) {
            sort(x.second.begin(),x.second.end());
            vector<int> temp;
            for (auto p : x.second)
                temp.push_back(p.second);
            ans.push_back(temp);
        }
        return ans;
    }
};