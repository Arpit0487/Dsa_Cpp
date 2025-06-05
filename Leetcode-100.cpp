class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL && q!=NULL || p!=NULL && q==NULL) return false;
        if(p->val != q->val) return false;
        bool LSTans = isSameTree(p->left, q->left);
        if(LSTans != true) return false;
        bool RSTans = isSameTree(p->right, q->right);
        if(RSTans != true) return false;
        return true;
    }
};