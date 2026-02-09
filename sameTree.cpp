/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * TreeNode *left;
 * TreeNode *right;
 * TreeNode() : val(0), left(nullptr), right(nullptr) {}
 * TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // 1. Base Case: If both nodes are NULL, they are identical up to this point.
        if (!p && !q) return true;

        // 2. Exclusion Case: If one is NULL (but not both) OR values differ, return false.
        if (!p || !q || p->val != q->val) return false;

        // 3. Recursion: Return true only if BOTH left and right subtrees match.
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};