class Node{
    public:
    int key,value;
    Node* next,*prev;
    Node(int a,int b){
        key=a;
        value=b;
        next=NULL;
        prev=NULL;
    }
};

class LRUCache {
public:
map<int,Node*>mpp;
Node* head=new Node(-1,-1);
Node* tail=new Node(-1,-1);
int capacity=0;
    LRUCache(int capacity) {
        this->capacity=capacity;
       
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(!mpp.count(key)){
          return -1;
        }
        Node* node=mpp[key];
        deleteNode(node);
        insertNode(node);
        return node->value;
    }
    
    void put(int key, int value) 
    {
        if(mpp.count(key)){
            Node* node=mpp[key];
            deleteNode(node);
            node->value=value;
            insertNode(node);
        }
        else{
            if(mpp.size()==capacity)
            {
                int x=tail->prev->key;
                deleteNode(tail->prev);
               
                mpp.erase(x);
            }
                Node* node=new Node(key,value);
                mpp[key]=node;
                insertNode(node); 
        }
    }
    
    void deleteNode(Node* node)
    {
          Node* p=node->prev;
          Node* n=node->next;
          p->next=n;
          n->prev=p;
          
    }
    void insertNode(Node* node)
    {
          Node* first=head->next;
          head->next=node;
          node->prev=head;
          node->next=first;
          first->prev=node;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */