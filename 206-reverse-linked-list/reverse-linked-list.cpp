/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) { return nullptr; }

        ListNode *current = head;
        ListNode *before = NULL;
        ListNode *after = NULL;

        while (current) {
            after = current->next;
            current->next = before;
            before = current; 
            current = after;
        }     

        return before;
    }
};
