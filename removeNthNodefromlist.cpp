/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* current = head;
        int count = 0;
        while (current != nullptr) {
            count++;
            current = current->next;
        }

        
        if (count == n) {
            return head->next;
        }

        
        int position = count - n;
        ListNode* prev = head;
        for (int i = 0; i < position - 1; i++) {
            prev = prev->next;
        }

        
        prev->next = prev->next->next;

        return head;
    }
};