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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        int maxWidth=0;
        while(!q.empty()){
            int n=q.size();
            unsigned long long startInd=q.front().second;
            unsigned long long endInd=q.back().second;
            maxWidth=max(maxWidth,(int)(endInd-startInd+1));
            for(int i=0;i<n;i++){
                TreeNode* front=q.front().first;
                unsigned long long index=q.front().second;
                q.pop();
                if(front->left!=NULL){
                    q.push({front->left,2*index+1});
                }
                if(front->right!=NULL){
                    q.push({front->right,2*index+2});
                }
            }
        }
        return maxWidth;
    }
};