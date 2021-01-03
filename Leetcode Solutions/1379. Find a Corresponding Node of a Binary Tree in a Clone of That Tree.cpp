/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    map<TreeNode*, int> mp1;
    map<int, TreeNode*> mp2;
    int counter = 1;
    
    void func(TreeNode *node){
        if(node == NULL) return;
        
        func(node->left);
        mp1[node] = counter;
        counter++;
        func(node->right);
    }
    
    void func2(TreeNode *node){
        if(node == NULL) return;
        
        func2(node->left);
        mp2[counter] = node;
        counter++;
        func2(node->right);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        func(original);
        counter = 1;
        func2(cloned);
        
        int id = mp1[target];
        
        return mp2[id];
    }
};