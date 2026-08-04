class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr)
            return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                level.push_back(temp->val);
                if(temp->left != nullptr)
                    q.push(temp->left);
                if(temp->right != nullptr)
                    q.push(temp->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};