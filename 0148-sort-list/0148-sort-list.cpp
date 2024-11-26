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
  ListNode* merge_two(ListNode* list1,ListNode* list2)
 {
        ListNode* ans=new ListNode(0);
        ListNode* head=ans;
        while(list1!=NULL && list2!=NULL){
            if(list1->val <=list2->val){
                ans->next=list1;
                ans=list1;
                list1=list1->next;
            } 
            else{
                ans->next=list2;
                ans=list2;
                list2=list2->next;
            }
        }

      while(list1){
        ans->next=list1;
        ans=list1;
        list1=list1->next;
      }
      while(list2){
        ans->next=list2;
        ans=list2;
        list2=list2->next;
      }
   return head->next;
  }
   ListNode* middle(ListNode* head){
     ListNode* fast=head->next,*slow=head;
     while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
     }
     return slow;
    
   }
   ListNode* merge(ListNode* head)
   {
    if(head==NULL || head->next==NULL){
        return  head;
    }
    ListNode* mid=middle(head);
    ListNode* left=head,*right=mid->next;  
    mid->next=NULL;
     left=merge(left);
     right=merge(right);
     return merge_two(left,right);
   }





    ListNode* sortList(ListNode* head) {
        
        return merge(head);
    }
};