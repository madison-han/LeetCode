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
    bool isSymmetric(TreeNode* r) {
        if (!r) { return true; }
        if (!r->left || !r->right) { 
            return !r->left && !r->right;
        }
        if (r->left->val != r->right->val) { return false; }

        return sym(r->left->left, r->right->right) && sym(r->left->right, r->right->left);
    }

    bool sym(TreeNode *l, TreeNode *r) {
        if (!l || !r) { return !l && !r; }
        if (l->val != r->val) { return false; }
        return sym(l->left, r->right) && sym(l->right, r->left);

    }
};