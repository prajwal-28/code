class Solution {
public:
    void traverse(Node* root, vector<int>& result) {
        if (!root) return;
        
        
        for (Node* child : root->children) {
            traverse(child, result);
        }
        
        
        result.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vector<int> result;
        traverse(root, result);
        return result;
    }
};