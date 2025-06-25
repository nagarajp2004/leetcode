class Solution {
public:
    int maxArea(vector<int>& h) {
    
    int n=h.size();
    int maxi=0;
    int i=0;
    int j=n-1;
    while(j>i){
         maxi=max(maxi,min(h[j],h[i])*(j-i));
         if(h[i]<h[j]){
            i++;
         }
         else{
            j--;
         }
    }
    return maxi;
        
    }
};