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
    TreeNode* ans=NULL;
    void helper(TreeNode* org,TreeNode* cln,TreeNode* target){
        if(org==NULL){
            return;
        }
        if(org==target){
            ans=cln;
        }
        helper(org->left,cln->left,target);
        helper(org->right,cln->right,target);
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        helper(original,cloned,target);
        return ans;
    }
};