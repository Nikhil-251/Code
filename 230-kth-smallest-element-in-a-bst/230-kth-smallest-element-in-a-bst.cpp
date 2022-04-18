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
    int target =-1;
    int count=0;
    int kthSmallest(TreeNode* root, int k) {
        count=k;
        inordertraversel(root);
        return target;
    }
    void inordertraversel(TreeNode* root){
        if(root==NULL){
            return;
        }
        inordertraversel(root->left);
        if(--count==0){
            target = root->val;
            return;
        }
        inordertraversel(root->right);
    }
};