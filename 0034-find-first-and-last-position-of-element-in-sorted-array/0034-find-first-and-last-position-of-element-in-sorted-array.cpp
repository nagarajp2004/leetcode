class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        int n=a.size();
         int first=-1,last=-1;
         int start =0,end=a.size()-1,mid;


         while(start<=end){
           mid=start+(end-start)/2;
       if(a[mid]==t){
           first=mid;
           end=mid-1;
       }      
       else if(a[mid]<t){
            start=mid+1;
        }
   else{
     end =mid-1;
      }}




   start=0;
   end=n-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(a[mid]==t){
             last=mid;
             start=mid+1;
        }
    else if(a[mid]<t){
      start=mid+1;
        }
   else{
     end =mid-1;
      }

    }   
    vector<int>p(2);
    p[0]=first;
    p[1]=last;
    
    return p;
     }      
     
};