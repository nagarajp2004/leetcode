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
class comp{
    public:
       bool operator()(ListNode* a ,ListNode* b){
        return a->val > b->val;
       }
};


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       if(lists.empty()){
        return NULL;
       }
       
        priority_queue<ListNode*,vector<ListNode*>,comp>pq;
        ListNode* dummy=new ListNode();
        ListNode* tail=dummy;

        for(auto i : lists){
          if(i!=NULL)
            pq.push(i);
        }

        while(!pq.empty()){
            ListNode* Node=pq.top();

            tail->next=Node;
            tail=tail->next;
            pq.pop();
            if(Node->next)
            pq.push(Node->next);
        }

        return dummy->next;
    }
};