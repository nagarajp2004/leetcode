class Solution {
public:
    int maxArea(vector<int>& h) {
       int i=0,j=h.size()-1;
       int maxi=-999;
       while(i<j){
          int mini=min(h[i],h[j]);
         int value= mini*(j-i);
        
          maxi=max(value,maxi);
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