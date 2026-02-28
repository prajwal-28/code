class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        vector<int> vals;
        
        
        ListNode* current = head;
        
        
        while (current != nullptr) {
            vals.push_back(current->val);
            current = current->next;
        }
        
        
        int left = 0;
        int right = vals.size() - 1;
        
        
        while (left < right) {
            if (vals[left] != vals[right]) {
                return false; 
            }
            left++;  
            right--; 
        }
        
        return true; 
    }
};
