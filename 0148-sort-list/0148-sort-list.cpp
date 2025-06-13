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
        ListNode* merge_two(ListNode* left,ListNode* right){
            ListNode* ans=new ListNode(0);
            ListNode* head=ans;
            while(left && right){
                if(left->val <=right->val){
                    ans->next=left;
                    ans=ans->next;
                    left=left->next;
                }
                else{
                    ans->next=right;
                    ans=ans->next;
                    right=right->next;
                }
            }
            while(left){
                ans->next=left;
                ans=ans->next;
                left=left->next;
            }

            while(right){
                ans->next=right;
                    ans=ans->next;
                    right=right->next;
            }
    return head->next;
        }
        ListNode* merge(ListNode* head){
            if(head==NULL || head->next==NULL){
                return head;
            }
            
            ListNode* left=head;
            ListNode* mid=middle(head);
            ListNode* right=mid->next;
            mid->next=NULL;
            
            left=merge(left);
            right=merge(right);

            return merge_two(left,right);
        }

        ListNode* middle(ListNode* head){
            if(head==NULL ||head->next==NULL){
                return head;
            }
            ListNode* slow=head;
            ListNode* fast=head->next->next;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
            return slow;
        }



        ListNode* sortList(ListNode* head) {
            return merge(head);
        }
    };