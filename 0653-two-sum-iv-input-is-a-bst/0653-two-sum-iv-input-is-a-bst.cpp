/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderValues;
    void inorder(TreeNode* root)
    {
        if (root==NULL)
            return;
        inorder(root->left);
        inorderValues.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k)
    {
        inorder(root);
        int left =0;
        int right= inorderValues.size() - 1;
        while (left<right)
        {
            int sum =inorderValues[left] + inorderValues[right];
            if (sum == k)
                return true;
            if (sum < k)
                left++;
            else
                right--;
        }
        return false;
    }
};