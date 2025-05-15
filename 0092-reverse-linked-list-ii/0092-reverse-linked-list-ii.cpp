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
    ListNode* reverse(ListNode* head){
        if(head==NULL){
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

    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
         if(left==right){
            return head;
         }
        ListNode* nhead=new ListNode(-1);
        nhead->next=head;
  ListNode* temp=nhead;
        ListNode* pl=NULL,*l=NULL,*r=NULL,*pr=NULL;
int count=0;
        while(temp){
            if(count==left-1){
                pl=temp;
            }else if(count==left){
                l=temp;
            }
            else if(count==right){
                 r=temp;
            }else if(count==right+1){
                pr=temp;
            }
            count++;
            temp=temp->next;
        }
     if(r){
        r->next=NULL;
     }
     l=reverse(l);
     pl->next=l;
   temp=l;
  while(temp->next){
    temp=temp->next;
  }
  temp->next=pr;
  return nhead->next;
    }
};