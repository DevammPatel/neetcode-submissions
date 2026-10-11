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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* curr = head;
        ListNode* dummy = new ListNode(0,head);
        ListNode* left = dummy;

        while(n>0){
            curr = curr->next;
            n--;
        }

        while(curr != nullptr){
            left = left->next;
            curr = curr->next;
        }

        left->next = left->next->next;
        
        return dummy->next;
    }
};
