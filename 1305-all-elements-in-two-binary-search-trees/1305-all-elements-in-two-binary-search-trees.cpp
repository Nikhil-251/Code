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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2,res;
        if(!root1 && !root2){
            return res;
        }
        stack<TreeNode *>s;
        TreeNode * t = NULL;
        while(root1 || !s.empty()){
            if(root1){
                s.push(root1);
                root1 = root1->left;
            }
            else{
                t = s.top();
                s.pop();
                v1.push_back(t->val);
                root1 = t->right;
            }
        }
        while(root2 || !s.empty()){
            if(root2){
                s.push(root2);
                root2 = root2->left;
            }
            else{
                t = s.top();
                s.pop();
                v2.push_back(t->val);
                root2 = t->right;
            }
        }
        int i=0,j=0;
        while(i<v1.size() && j<v2.size())
        {
            if(v1[i]==v2[j])
            {
                res.push_back(v1[i]);
                res.push_back(v2[j]);
                i++;
                j++;
            }
            else if(v1[i]<v2[j])
            {
                res.push_back(v1[i]);
                i++;
            }
            else
            {
                res.push_back(v2[j]);
                j++;
            }
        }
        
        while(i<v1.size())res.push_back(v1[i++]);
        while(j<v2.size())res.push_back(v2[j++]);
        return res;
        
    }
};