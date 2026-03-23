class Solution {
public:
    void inorder(TreeNode* node, vector<int>& result){
        if(node == NULL) return;
        inorder(node->left,result);
        result.push_back(node->val);
        inorder(node->right,result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        inorder(root,result);
        return result;
    }
};