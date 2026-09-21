/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      if(root==nullptr||root==p||root==q){
      return root;
    }  
    TreeNode* left=lowestCommonAncestor(root->left,p,q);
    TreeNode* right=lowestCommonAncestor(root->right,p,q);
    if(left==NULL)
    return right;
    else if(right==NULL)
    return left;
    else
    return root;
    }
};
/*
Approach
- If the current node is `NULL`, `p`, or `q`, return the current node.
- Recursively search for `p` and `q` in the left and right subtrees.
- If the left subtree returns `NULL`, return the result from the right subtree.
- If the right subtree returns `NULL`, return the result from the left subtree.
- If both left and right return non-`NULL`, it means `p` and `q` are present in different subtrees, so the current node is their Lowest Common Ancestor.

 Intuition
We recursively search for `p` and `q` in both subtrees. If both sides return a node, the current node is the first node where their paths meet, so it is the LCA. If only one side returns a node, we pass that result upward.

Time Complexity
O(n), because every node may be visited once.

Space Complexity
O(h), where `h` is the height of the tree due to the recursion stack. In the worst case, it is O(n).*/