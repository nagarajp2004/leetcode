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
      ListNode* dummy=new ListNode(-1);
      ListNode* cur=dummy;
      int carry=0;

   while(l1 && l2){
       int sum=l1->val+l2->val+carry;
         carry=sum/10;
         sum=sum%10;
        cur->next=new ListNode(sum);
        cur=cur->next;        
      l1=l1->next;
      l2=l2->next;
   }
  while(l1){
     int sum=carry+l1->val;
        carry=sum/10;
         sum=sum%10;
     cur->next=new ListNode(sum);
     cur=cur->next;
     l1=l1->next;
  }
  while(l2){
     int sum=carry+l2->val;
        carry=sum/10;
         sum=sum%10;
     cur->next=new ListNode(sum);
     cur=cur->next;
     l2=l2->next;
  }

  if(carry){
     cur->next=new ListNode(carry);
  }


   return dummy->next;

    }
};