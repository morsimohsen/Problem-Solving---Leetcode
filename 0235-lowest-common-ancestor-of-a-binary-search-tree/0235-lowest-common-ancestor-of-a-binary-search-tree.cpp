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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* top = root;
        
        while (root) {
            if (p->val > top->val && q->val > top->val)
                top = top->right;
            else if (p->val < top->val && q->val < top->val)
                top = top->left;
            else
                break;
        }
        return top;
    }
};