# Invert Binary Tree,  C++ Solution
> Given the root of a binary tree, invert the tree, and return its root.

### Approach 1:
```cpp
//Using the same function to invert nodes.
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
```

### Approach 2:
```cpp
//Creating a helper function to invert nodes.
class Solution {
public:
    void helper(TreeNode* root){
        if(root==NULL) return;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        helper(root->left);
        helper(root->right);
    }
    TreeNode* invertTree(TreeNode* root){
        helper(root);
        return root;
    }
};
```