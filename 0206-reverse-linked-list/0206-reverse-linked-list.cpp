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
        if(head == NULL || head->next == NULL)  
            return head;
        ListNode* prev = head;
        ListNode* curr = prev->next;
        head->next = NULL;
        // Run a loop till curr and prev points to NULL...
        while(prev != NULL && curr != NULL){
            ListNode* next = curr->next;
            // Now assign the prev pointer to curr’s next pointer.
            curr->next = prev;
            // Assign curr to prev, next to curr...
            prev = curr;
            curr = next;
        }
        return prev; 
    }
};