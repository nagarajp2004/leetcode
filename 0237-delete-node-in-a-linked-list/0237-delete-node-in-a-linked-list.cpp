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
        
        ListNode* next=node->next;
        while(next->next!=NULL){
            swap(node->val,next->val);
            node=node->next;
            next=next->next;
        }
         swap(node->val,next->val);
         node->next=NULL;
    }
};