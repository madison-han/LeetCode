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
    int gcd(int num1, int num2) {
        while (num2 != 0) {
            int temp  = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        return num1;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* current = head;
    
        while (current->next) {
            int num1 = current->val;
            int num2 = current->next->val;
    
            ListNode* temp = new ListNode(gcd(num1, num2), current->next);
            current->next = temp;
    
            current = temp->next;
        }
    
        return head;
    }
};
