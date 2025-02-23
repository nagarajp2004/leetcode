//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	  class Node{
	     public:
	     int freq;
	     char sys;
	     Node* right,*left;
	     
	     Node(int fre,char s){
	         freq=fre;
	         sys=s;
	         left=NULL,right=NULL;
	     }
	  };
	 class cmp{
	   
	   public:
	   bool operator()(Node* a,Node* b){
	       return a->freq > b->freq;
	   }
	 };
	   void preorder(Node* root,string& temp,vector<string>& ans)
	   {
              if(root==NULL){
                  return ;
              }
              
              if(root->left==NULL && root->right==NULL){
                  ans.push_back(temp);
                  return; 
              }
              temp.push_back('0');
              preorder(root->left,temp,ans);
              temp.pop_back();
              temp.push_back('1');
              preorder(root->right,temp,ans);
              temp.pop_back(); 	       
	   }
	   
	   
	
		vector<string> huffmanCodes(string s,vector<int> f,int N)
		{
		    // Code here
        priority_queue<Node*,vector<Node*>,cmp>pq;
        for(int i=0;i<N;i++)
        {
          pq.push(new Node(f[i],s[i]));    
        }
        
        while(pq.size()>1){
            Node* first=pq.top();
            pq.pop();
            Node* second=pq.top();
            pq.pop();
            Node* root=new Node(first->freq+second->freq,'$');
            root->left=first;
            root->right=second;
            pq.push(root);
        }
        
         Node* root=pq.top();
         pq.pop();
         
        vector<string>ans;
        string temp;
        
        preorder(root,temp,ans);
        
        return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends