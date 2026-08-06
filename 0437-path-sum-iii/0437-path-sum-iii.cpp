/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int solve(TreeNode* root, long long target) {
        if (root==NULL)
            return 0;
        int ans = 0;
        if (root->val==target)
            ans++;
        ans +=solve(root->left,target - root->val);
        ans +=solve(root->right,target - root->val);
        return ans;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if (root==NULL)
            return 0;
        return solve(root,targetSum)
             + pathSum(root->left,targetSum)
             + pathSum(root->right,targetSum);
    }
};