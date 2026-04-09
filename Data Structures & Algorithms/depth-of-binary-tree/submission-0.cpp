/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int height(TreeNode *root, int &ans)
    {
        if(root==nullptr)
        return 0;
        int l=height(root->left,ans);
        int r=height(root->right,ans);
        return 1+max(r,l);
    }
    int maxDepth(TreeNode* root) {
        
        if(root==nullptr)
        return 0;
        int l= maxDepth(root->left);
        int r= maxDepth(root->right);
        return 1+max(r,l);
        
    }
};
