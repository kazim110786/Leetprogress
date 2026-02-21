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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>Q;
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        Q.push(root);
        while(!Q.empty()){
            int size=Q.size();
            vector<int>temp;
            for(int i=0;i<size;i++){
                TreeNode* curr=Q.front();
                Q.pop();
                temp.push_back(curr->val);
                if(curr->left!=NULL){
                    Q.push(curr->left);
                }
                if(curr->right!=NULL){
                    Q.push(curr->right);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};