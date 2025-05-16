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
        int length=0;
        if(head==NULL){
            return NULL;
        }
        ListNode* temp=head;
        while(temp){
            length++;
            temp=temp->next;
        }
        int spot=length-n+1;

        temp=head;
        ListNode*prev=NULL,* next=NULL;
        while(temp)
        {   
               if(spot==1){
                break;
            }
            spot--; 
           
             prev=temp;
             temp=temp->next;
          
        }
        
        if(temp!=NULL)
        {  if(prev)
            prev->next=temp->next;
            else
             return temp->next;
        }
  return head;
    }
};