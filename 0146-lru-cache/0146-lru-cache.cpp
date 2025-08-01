class Node{
   public:
    int key;
    int value;
    Node* next;
    Node* prev;

    Node(int k,int val){
        key=k;
        value=val;
        next=NULL;
        prev=NULL;
    }

};



class LRUCache {
public:
   int cap;
   Node* head=new Node(-1,-1);
   Node* tail=new Node(-1,-1);
   
   unordered_map<int,Node*>mpp;

    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }

    void delete_node(Node* node){
        Node* p=node->prev;
        Node* n=node->next;
        p->next=n;
        n->prev=p;
    }

    void insert_node(Node* node){
      Node* first=head->next;
      head->next=node;
      node->prev=head;
      node->next=first;
      first->prev=node;
    }
    int get(int key) {
        if(!mpp.count(key)){
            return -1;
        }
        Node* node=mpp[key];
        delete_node(node);
        insert_node(node);
        return node->value;
    }
    
    void put(int key, int value) {
         if(mpp.count(key)){
             Node* node=mpp[key];
             node->value=value;
             delete_node(node);
             insert_node(node);
         }else{
            Node* node=new Node(key,value);
            if(cap>0){
                insert_node(node);
                mpp[key]=node;
                cap--;
            }else{
                Node* del=tail->prev;
                mpp.erase(del->key);
                delete_node(tail->prev);
                insert_node(node);
                mpp[key]=node;
            }

         }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */