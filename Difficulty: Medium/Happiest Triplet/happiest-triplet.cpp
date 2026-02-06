class Solution {
  public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        // code here.
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        
        int x,y,z;
        
        int diff=INT_MAX;
        int n=a.size();
        int i=0,j=0,k=0;
        
        while(i<n && j<n && k<n){
            int maxi=max({a[i],b[j],c[k]});
            int mini=min({a[i],b[j],c[k]});
            
            int new_diff=maxi-mini;
            
            if(new_diff < diff){
                diff=new_diff;
                x=mini;
                z=maxi;
                y=(a[i]+b[j]+c[k]) -(x+z);
            }
            
            if(a[i]==mini){
                i++;
            }else if(b[j]==mini){
                j++;
            }else{
                k++;
            }
        }
        return {z,y,x};
    }
};