class Solution {
public:
    int check(vector<int>& arr,int w){
          int days=0;
         
         int x=0;
        for(int i=0;i<arr.size();i++)
        { 
            if(arr[i] > w){
                return INT_MAX;
            }

            x+=arr[i];
             if(x>w){
                days++;
                x=arr[i];
             }
        }
        if(x>0){
            days++;
        }
        return days;
          
    }

    int shipWithinDays(vector<int>& w, int days) {
        
        int total=accumulate(w.begin(),w.end(),0);
        int i=1;
        int j=total;
         int ans=total;

        while(i<=j){
            int mid=(i+j)/2;
            int d=check(w,mid);

            if(d<=days){
                ans=mid;
                j=mid-1;
            }else{
                i=mid+1;
            }
            
        }
        return ans;
    }
};