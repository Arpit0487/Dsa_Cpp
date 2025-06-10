class Solution {
public:
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    };
    void displayOddLevels(TreeNode* root, int current, int level, vector<int>& v){
        if(root == NULL) return;
        if(current == level){
            v.push_back(root->val);
            return;
        }
        displayOddLevels(root->left,current+1,level,v);
        displayOddLevels(root->right,current+1,level,v);
    };
    void displayEvenLevels(TreeNode* root, int current, int level, vector<int>& v){
        if(root == NULL) return;
        if(current == level){
            v.push_back(root->val);
            return;
        }
        displayEvenLevels(root->right,current+1,level,v);
        displayEvenLevels(root->left,current+1,level,v);
    };
    void lOrder(TreeNode* root, vector<vector<int>>& ans){
        int n = levels(root);
        for(int i=1; i<=n; i++){
            vector<int> v;
            if(i%2==0){
                displayEvenLevels(root,1,i,v);
            }
            else{
                displayOddLevels(root,1,i,v);
            }
            ans.push_back(v);
        }
    };
    vector<vector<int>> zigzagLevelOrder(TreeNode* root){
        vector<vector<int>> ans;
        lOrder(root,ans);
        return ans;
    }
};