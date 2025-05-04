class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_ans=0;
        int check=0;
        int ans=0;
        int n=gas.size();
        for(int i=0;i<n;i++){
             total_ans+=gas[i]-cost[i];
             check+=gas[i]-cost[i];
             if(check<0){
                check=0;
                ans=i+1;
             }
        }
       return (total_ans<0)?-1:ans;
    }
};