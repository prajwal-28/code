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
    void allPaths(TreeNode* root, string path, vector<string>& ans) {
        // Base Case: If it's a leaf node, add the path to the answer
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(path);
            return;
        }

        // Recursive Step: Traverse Left 
        if (root->left) {
            // Append "->" and the left child's value to the current path
            allPaths(root->left, path + "->" + to_string(root->left->val), ans);
        }

        // Recursive Step: Traverse Right 
        if (root->right) {
            // Append "->" and the right child's value to the current path
            allPaths(root->right, path + "->" + to_string(root->right->val), ans);
        }
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        
        // Return empty vector if root is null (though problem constraints usually say >=1 node)
        if (root == NULL) return ans; 

        // Initialize path with the root value 
        string path = to_string(root->val);
        
        // Call the helper function
        allPaths(root, path, ans);
        
        return ans;
    }
};