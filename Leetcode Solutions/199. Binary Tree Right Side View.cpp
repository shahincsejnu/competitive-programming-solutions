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
    vector<int> ans;
    
    void bfs(TreeNode *root){
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* res = q.back();
            ans.push_back(res->val);
            
            int l = q.size();
            
            for(int i = 0; i < l; i++){
                TreeNode* u = q.front();
            
                if(u->left) q.push(u->left);
                if(u->right) q.push(u->right);

                q.pop();
            }
        }
    }
    
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return ans;
        
        bfs(root);
        
        return ans;
    }
};