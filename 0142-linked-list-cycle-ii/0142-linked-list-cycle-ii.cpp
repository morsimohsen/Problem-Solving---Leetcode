/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow,*fast,*intersection;
        fast=head;
        slow=head;
        intersection=head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow){
                
                while(slow != intersection){
                    
                    slow = slow->next;
                    intersection = intersection->next;
                }
                return intersection;
            }
        }
        
        return nullptr;
    }
};