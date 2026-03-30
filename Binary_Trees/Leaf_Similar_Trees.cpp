class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaves1;
        vector<int>leaves2;
        dfs(root1,leaves1);
        dfs(root2,leaves2);

        return leaves1 == leaves2;
    }
    void dfs(TreeNode* node,vector<int>& leaves){
        if(node == NULL) return ;
        dfs(node->left,leaves);
        dfs(node->right,leaves);
        if(!node->left && !node->right) leaves.push_back(node->val);
    }
};