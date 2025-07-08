/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* cur=node,*next=node->next;
        while(next->next){
           cur->val=next->val;
           cur=cur->next;
           next=next->next;  
        }
        cur->val=next->val;
        cur->next=NULL;
    }
};