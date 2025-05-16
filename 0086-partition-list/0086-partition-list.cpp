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
    ListNode* partition(ListNode* head, int x) {

     ListNode* dl=new ListNode(-1);
     ListNode* dr=new ListNode(-1);

     ListNode* prev1=dl,*prev2=dr;
   ListNode* cur=head;
 
     while(cur){
        if(cur->val < x)
        {
           prev1->next=cur;
           prev1=cur;
           prev2->next=NULL;
        }else
        {
           prev2->next=cur;
           prev2=cur;
           prev1->next=NULL;
        }
        cur=cur->next;
     }
    

    ListNode* temp=dl;
    while(temp->next){
        temp=temp->next;;
    }
    temp->next=dr->next;
    return dl->next;

    }
};