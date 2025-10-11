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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        if(n==0){
            return NULL;
        }
        k=k%n;
        if(k==0){
            return head;
        }
       k=n-k-1;
       ListNode* d=head;
       while(k){
        d=d->next;
        k--;
       }

       ListNode* next =d->next;
       ListNode* h=next;
       d->next=NULL;
       while(next->next!=NULL){
         next=next->next;
       }
       next->next=head;
       return h;

    }
};