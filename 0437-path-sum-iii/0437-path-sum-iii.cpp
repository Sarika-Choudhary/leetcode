class Solution {
public:
    int findPath(TreeNode* root, long long targetSum) {
        if (root == NULL)
            return 0;
        int count = 0;
        if (root->val == targetSum)
            count++;
        count += findPath(root->left, targetSum - root->val);
        count += findPath(root->right, targetSum - root->val);
        return count;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return 0;
        int count = 0;
        count += findPath(root, targetSum);
        count += pathSum(root->left, targetSum);
        count += pathSum(root->right, targetSum);
        return count;
    }
};