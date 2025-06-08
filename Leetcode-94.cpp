class Solution {
public:
    void preOrder(TreeNode* root, vector<int>& ans){
        if(root==NULL) return;
        preOrder(root->left,ans);
        ans.push_back(root->val);
        preOrder(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        preOrder(root,ans);
        return ans;
    }
};