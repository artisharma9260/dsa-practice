class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>post;
        TreeNode* curr = root;
        TreeNode* temp;
        while(curr != NULL || !st.empty()){
            if(curr != NULL ){
                st.push(curr);
                curr = curr->left;
            }
            else {
                temp = st.top()->right;
                if(temp == NULL){
                    temp = st.top();
                    st.pop();
                    post.push_back(temp);
                    while(!st.empty() && temp == st.top()->right){
                        temp = st.top();
                        st.pop();
                        post.push_back(temp->val);
                    }
                }
                else curr = temp;
            }
        }
        return post;
    }
};