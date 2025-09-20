class Solution {
  public:
  
  class Node{
      public:
     char c;
     int data;
     Node* left;
     Node* right;
     Node(char x,int d){
         c=x;
         data=d;
         left=NULL;
         right=NULL;
     }
  };
  
  class comp{
      public:
      bool operator()(Node* a,Node* b){
          return a->data > b->data;
      }
  };
  
  
  void preorder(Node* root,vector<string>&vt,string s)
  {
      if(!root->left && !root->right){
          vt.push_back(s);
          return ;
      }
      preorder(root->left,vt,s+'0');
      preorder(root->right,vt,s+'1');
      
      
  }
    vector<string> huffmanCodes(string s, vector<int> f, int N) {
        // Code here
         priority_queue<Node* ,vector<Node*>,comp>pt;
         
         for(int i=0;i<N;i++){
             Node* x=new Node(s[i],f[i]);
             pt.push(x);
         }
         
         while(pt.size() >1){
             Node* n1=pt.top();
             int x=n1->data;
             pt.pop();
             Node* n2=pt.top();
             int y=pt.top()->data;
             pt.pop();
             
             Node* mix=new Node('$',x+y);
             mix->left=n1;
             mix->right=n2;
             pt.push(mix);
         }
         vector<string>ans;
         string temp="";
         preorder(pt.top(),ans,temp);
         return ans;
        
    }
};