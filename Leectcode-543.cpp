class Solution {
public:
    int maxDia = 0;
    int maxHeight(TreeNode* root){
        if(root == NULL) return 0;
        int LST = maxHeight(root->left);
        int RST = maxHeight(root->right);
        maxDia = max(maxDia, LST+RST);
        return 1 + max(LST, RST);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxHeight(root);
        return maxDia;
    }
};