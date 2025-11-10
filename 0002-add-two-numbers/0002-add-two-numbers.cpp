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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* nhead=new ListNode(0);
        ListNode* cur1=l1,*cur2=l2,*temp=nhead;
        int car=0;

        while(l1 && l2){
            int sum=l1->val+l2->val+car;
            car=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int sum=l1->val+car;
            car=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            l1=l1->next;
        }
           while(l2){
            int sum=l2->val+car;
            car=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            l2=l2->next;
        }
        if(car){
            temp->next=new ListNode(car);
        }

        return nhead->next;

    }
};