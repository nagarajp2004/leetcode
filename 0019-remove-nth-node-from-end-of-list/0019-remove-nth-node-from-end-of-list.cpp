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
        ListNode *temp=head;
        while(temp!=NULL && n>0){
            n--;
            temp=temp->next;
        }

        ListNode* cur=head;
        ListNode* prev=NULL;
        while(temp){
            prev=cur;
            cur=cur->next;
            temp=temp->next;
        }
        if(prev)
        prev->next=cur->next;
        if(cur==head){
            return cur->next;
        }
        return head;
    }
};