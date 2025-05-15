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
    ListNode* revers(ListNode* node){
        if(node==NULL){
            return NULL;
        }
        if(node->next==NULL){
            return node;
        }
        ListNode* prev=NULL,*cur=node,*next;
        while(cur){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
       return prev;
    }

    ListNode* addTwoNumbers(ListNode*t1, ListNode* t2) {

        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        int car=0;
        while(t1 && t2){
             int value = car+t1->val +t2->val;
             car=value/10;
             value=value%10;
             head->next=new ListNode(value);
           head=head->next;
           t1=t1->next;
           t2=t2->next;
        }
        while(t1){
             int value = car+t1->val ;
             car=value/10;
             value=value%10;
             head->next=new ListNode(value);
             head=head->next;
              t1=t1->next;
        }
        while(t2){
             int value = car+t2->val ;
             car=value/10;
             value=value%10;
             head->next=new ListNode(value);
             head=head->next;
              t2=t2->next;
        }
        if(car){
            head->next =new ListNode(car);
        }
        return temp->next;
      
    }
};