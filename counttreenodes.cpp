class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        
        int l = getHeight(root->left);
        int r = getHeight(root->right);
        
        if (l == r) {
            
            return (1 << l) + countNodes(root->right);
        } else {
            
            return (1 << r) + countNodes(root->left);
        }
    }

private:
    int getHeight(TreeNode* node) {
        int h = 0;
        while (node) {
            h++;
            node = node->left;
        }
        return h;
    }
};