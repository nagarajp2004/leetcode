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
        ListNode* cur=head;
        ListNode* next;
        ListNode* prev=NULL;
    if(!head){
        return NULL;
    }

        while(cur){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
     }

    ListNode* reverseKGroup(ListNode* head, int k)
     {
        

        ListNode* nhead=new ListNode(-1);
        ListNode* nlast=nhead;
        ListNode* cur=head;
        int flag=0;
        ListNode* prev,*start=head;
        while(cur){
            for(int i=0;i<k;i++){
                prev=cur;
                if(!cur){
                    flag=1;
                    break;

                }
                cur=cur->next;
            }
            if(flag==0){
            prev->next=NULL;
            nlast->next=reverse(start);
            while(nlast->next){
                nlast=nlast->next;
            }}
            else{
                nlast->next=start;
            }
            start=cur;
        }
      return nhead->next;
    }
};