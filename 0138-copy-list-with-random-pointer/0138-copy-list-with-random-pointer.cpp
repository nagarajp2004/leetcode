/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
     Node* dhead=new Node(-1);
     if(head==NULL ){
        return head;
     }
      Node* temp=dhead;
      Node* oh=head;
     while(head)
     {
        temp->next=new Node(head->val);
        temp=temp->next;
        head=head->next;
     }
     dhead=dhead->next;
     temp=dhead;
    Node* temp2=oh;
     unordered_map<Node*,Node*>mpp;
    while(temp2)
    { 
     mpp[temp2]=temp;
     temp2=temp2->next;
     temp=temp->next;
    }
     temp=dhead;
     temp2=oh;
    while(temp){
        if(temp2->random){
            temp->random=mpp[temp2->random];
        }
        temp=temp->next;
        temp2=temp2->next;
    }
 return dhead;
    }
};