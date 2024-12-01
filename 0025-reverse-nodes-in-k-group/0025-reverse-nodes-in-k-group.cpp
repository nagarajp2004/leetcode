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
ListNode* rev(ListNode* head)
{
      if(!head){
        return NULL;
      }

      ListNode* prev=NULL,*cur=head,*next;
      while(cur){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next; 
      }
      return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
       if(head==NULL){
        return NULL;
       }

       ListNode* cur=head,*prev=NULL,*next=NULL;
       ListNode* first=NULL;
       ListNode* newhead=NULL;
       while(cur){
          first=cur;
          for(int i=0;i<k-1;i++){
            if(cur==NULL){
              return newhead;
            }
            cur=cur->next;
           
          }
         if(cur==NULL){
            break;
         }
          next=cur->next;
          cur->next=NULL;
          if(prev!=NULL){
            prev->next=rev(first);
          }
          else{
            newhead=rev(first);
          }
          prev=first;
          first->next=next;
          cur=next;
       }
       return newhead;
    }
};