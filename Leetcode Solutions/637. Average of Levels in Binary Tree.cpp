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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        
        if(!root) return ans;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()){
            int l = q.size();
            double sum = 0, cnt = 0;
            TreeNode* node;
            
            for(int i = 0; i < l; i++){
                node = q.front();
                q.pop();
                sum += node->val;
                cnt++;
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            
            sum /= cnt;
            ans.push_back(sum);
        }
        
        return ans;
    }
};