class Solution {
public:
    int strStr(string h, string n) 
    {
        int n0=h.size();
        int m0=n.size();
        for(int i=0;i<n0;i++){
            int j=0;
            while(i<n0 && j<m0 && h[i+j]==n[j] ){
                j++;
            }
            if(j==m0){
                return i;
            }
        }
        return -1;
        
    }
};