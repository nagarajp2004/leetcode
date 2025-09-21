#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    class comp {
    public:
        bool operator()(vector<int>& a, vector<int>& b) {
            if (a[2] == b[2]) return a[1] < b[1];
            return a[2] < b[2];
        }
    };

    int maxStop(int train, int plat, vector<vector<int>>& tra) {
        sort(tra.begin(), tra.end(), comp()); 
        
        // pass object of comp
        int ans=0;
        vector<int>prev(plat+2,0);
        
        for(int i=0;i<train;i++){
            if(prev[tra[i][2]] <= tra[i][0]){
                ans++;
                prev[tra[i][2]]=tra[i][1];
            }
        }
        return ans;
        
    }
};
