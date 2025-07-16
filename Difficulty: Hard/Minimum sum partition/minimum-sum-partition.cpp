class Solution {

  public:

    
   
    
    int f(int i,vector<int>& arr,int x,vector<vector<int>>&vt){
        if(i==arr.size()){
           int sum=accumulate(arr.begin(),arr.end(),0);
            int y=sum-x;
            return abs(y-x);
            
        }
        if(vt[i][x]!=-1){
            return vt[i][x];
        }
        
      return vt[i][x]=min(f(i+1,arr,x,vt),f(i+1,arr,x+arr[i],vt)); 
      
    }
  
  
    int minDifference(vector<int>& arr) {
        // Your code goes here
        int sum=accumulate(arr.begin(),arr.end(),0);
        int n=arr.size();
        vector<vector<int>>vt(n+1,vector<int>(sum+1,-1));
        return f(0,arr,0,vt);
    }
};
