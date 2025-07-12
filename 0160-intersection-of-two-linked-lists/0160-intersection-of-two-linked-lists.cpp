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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* cur=headA;
        while(cur->next){
            cur=cur->next;
        }
        cur->next=headB;

        ListNode* fast=headA;
        ListNode* slow=headA;
        
        while( fast && fast->next){
             fast=fast->next->next;
             slow=slow->next;
             if(slow==fast){
                break;
             }
        }
        if(slow!=fast){
            cur->next=NULL;
            return NULL;
        }

        slow=headA;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* x=fast;
        cur->next=NULL;
        return x;
        
    }
};