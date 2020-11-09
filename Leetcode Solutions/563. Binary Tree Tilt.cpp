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
    
    int helper(TreeNode *root)
    {
        if(!root) return 0;
        
        int left = helper(root->left);  
        int right = helper(root->right);
        
        int val = root->val + left + right;
        
        root->val = abs(left - right);
        
        return val;
    }
    
    int helper_2(TreeNode *root)
    {
        if(!root) return 0;
        return helper_2(root->left) + helper_2(root->right) + root->val;
    }
    
    int findTilt(TreeNode* root) {
        helper(root);
        
        return helper_2(root);
    }
};