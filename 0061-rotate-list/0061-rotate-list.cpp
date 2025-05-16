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
    int  size(ListNode* head){
    int count=0;
    while(head){
        count++;
        head=head->next;
    }
    return count;
    }

    ListNode* rotateRight(ListNode* head, int k) 
    {
        int n=size(head);
        if(n==0){
            return NULL;
        }
   k=k%n;
        if(k==0){
            return head;
        }
        k=n-k;

        ListNode* temp=head,*next=NULL;
        k--;
        while(k){
            temp=temp->next;
            k--;
        }
       
        next=temp->next;
        temp->next=NULL;
         temp=next;
         while(temp->next!=NULL){
            temp=temp->next;
         }
         temp->next=head;

        return next;
    }
};