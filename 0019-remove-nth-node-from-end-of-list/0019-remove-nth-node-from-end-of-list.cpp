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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        int len=0;
        ListNode* cur=head;
        while(cur!=NULL){
            len++;
            cur=cur->next;
        }
        int k=len-n;

        if(k==0){
            return head->next;
        }
   ListNode* prev=NULL;
   cur=head;
   while(k--){
       prev=cur;
       cur=cur->next;
   }
   prev->next=cur->next;
   return head;
      


        
    }
};