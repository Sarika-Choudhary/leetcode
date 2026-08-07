class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr)
            return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;
        while(!q.empty()) {
            int size = q.size();
            vector<int> level(size);
            for(int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                int index;
                if(leftToRight)
                    index = i;
                else
                    index = size - 1 - i;
                level[index] = temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(level);
            leftToRight = !leftToRight;
        }
        return ans;
    }
};