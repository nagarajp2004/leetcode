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
        ListNode* temp=head,*prev=NULL;
        int size=0;
       if(temp==NULL || temp->next==NULL){
        return NULL;
       }
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }
    
  n=size-n;
     temp=head;
     
    while(n){
        prev=temp;
        temp=temp->next;
        n--; 
    }
    ListNode* next;
    if(prev==NULL){
        next=temp->next;
        head=next;
        delete temp;
      
    }
    else{
       prev->next=temp->next;
      delete temp;

    }
  return head;
    }
};