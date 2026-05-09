class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        
        ListNode *prev = nullptr, *curr = slow->next, *nextNode;
        slow->next = nullptr; 
        while (curr) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        
        ListNode *p1 = head, *p2 = prev;
        while (p2) {
            ListNode *temp1 = p1->next;
            ListNode *temp2 = p2->next;

            p1->next = p2;
            p2->next = temp1;

            p1 = temp1;
            p2 = temp2;
        }
    }
};