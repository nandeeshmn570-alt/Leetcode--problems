/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        vector<int> v;

        if (root == NULL) {
            return ans;
        }
        q.push(root);
        q.push(NULL);

        while (q.size() > 0) {
            TreeNode* curr = q.front();
            q.pop();
           
            if (curr == NULL){
                if (!q.empty()) {
                    ans.push_back(v);
                    v.clear();
                    q.push(NULL);
                    continue;
                } else {
                    break;
                }
            }
            v.push_back(curr->val);
            
            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }
        if(v.size()>0){
            ans.push_back(v);
        }
        return ans;
    }
};