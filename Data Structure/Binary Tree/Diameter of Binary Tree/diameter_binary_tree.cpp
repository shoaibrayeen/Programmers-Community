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
private:
    int helper(TreeNode *root){
        if(!root)
            return 0;
        int left = helper(root->left);
        int right = helper(root->right);
        diameter = max(diameter, left+right);
        return 1 + max(left,right);
    }
public:
    int diameter=0;
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return diameter;
        
    }
};
