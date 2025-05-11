class Solution {
public:
    void gameOfLife(vector<vector<int>>& brd) {
        
        vector<int>rdx={-1,-1,-1,0,0,1,1,1};
        vector<int>cdx={-1,0,1,-1,1,-1,0,1};
       int n=brd.size();
       int m=brd[0].size();

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            int live=0;
            for(int k=0;k<8;k++){
                int row=i;
                int col=j;
                row+=rdx[k];col+=cdx[k];
                if(row>=0 && col>=0 && row<n && col< m){
                 live+=brd[row][col]%2;
                }
            }
            if(brd[i][j]==1){
                if(live<2 || live>3){
                    brd[i][j]=3;
                }
            }
            if(brd[i][j]==0){
                if(live==3){
                    brd[i][j]=2;
                }
            }
        }
       }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(brd[i][j]==3){
                brd[i][j]=0;
            }
            if(brd[i][j]==2){
                brd[i][j]=1;
            }
        }
       }


    }
};