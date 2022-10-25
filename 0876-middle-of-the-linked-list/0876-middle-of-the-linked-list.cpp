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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head; 
        ListNode* ans;
        int len = 1, count = 1, mid = 0;
        while(temp->next) {
            temp = temp->next;
            len++;
        }
        if(len % 2 == 0) {
            mid = (len+1) / 2 + 1;
        }
        else
            mid = (len+1) / 2;
        while(head->next) {
            if (count == mid) {
                ans = head;
                break;
            }
            head = head->next;
            count++;
            
        }
        
        return ans;
    }
};