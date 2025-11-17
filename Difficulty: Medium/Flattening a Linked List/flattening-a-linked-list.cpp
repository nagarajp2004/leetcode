/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class comp{
   public:
   bool operator()(Node* a,Node* b){
       return a->data > b->data;
   }
};

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        priority_queue<Node* ,vector<Node*>,comp>pq;
        while(root){
            pq.push(root);
            root=root->next;
        }
        Node* sol=new Node(0);
         Node* cur=sol;
    while(!pq.empty())
    {
        cur->bottom=pq.top();
        cur=cur->bottom;
        if(pq.top()->bottom){
            pq.push(pq.top()->bottom);
        }
        pq.top()->next=NULL;
        pq.pop();
    }    
    return sol->bottom;
    }
};