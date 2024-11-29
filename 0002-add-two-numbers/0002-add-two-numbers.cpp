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
        
        ListNode* first=l1,*second=l2;
        int carry=0;
        ListNode* ans=new ListNode(-1); 
        ListNode* sol=ans;
        while(first && second)
        {
            int data=first->val+second->val+carry;
            carry=data/10;
            data=data%10;
            ans->next=new ListNode(data);
            ans=ans->next;
            first=first->next;
            second=second->next;
        }
    int data=0;
    while(first){
        data=first->val+carry;
        carry=data/10;
        data=data%10;
        ans->next=new ListNode(data);
        ans=ans->next;
        first=first->next;
    }
    while(second){
        data=second->val+carry;
        carry=data/10;
        data=data%10;
        ans->next=new ListNode(data);
        ans=ans->next;
        second=second->next;
    }
    if(carry){
        ans->next=new ListNode(carry);
    }


        return sol->next;
    }
};