class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int ind1=0,ind2=0;
        int i=0,j=0;
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        int cnt=0;
        int index2=n/2;
        int index1=index2-1;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                if(cnt==index1)ind1=nums1[i];
                if(cnt==index2)ind2=nums1[i];
                cnt++;
                i++;
            }
            else{
                 if(cnt==index1)ind1=nums2[j];
                if(cnt==index2)ind2=nums2[j];
                cnt++;
                j++;
            }}
            while(i<n1){
               if(cnt==index1)ind1=nums1[i];
                if(cnt==index2)ind2=nums1[i];
                cnt++;
                i++;  
            }
            while(j<n2)
            {
                 if(cnt==index1)ind1=nums2[j];
                if(cnt==index2)ind2=nums2[j];
                cnt++;
                j++; 
            }
            double x=(double)ind1+(double)ind2;
        if(n%2==0)
        {
          return (double)(x/2.0);
        }
        else{
         return (ind2);
          }
       
    }
};