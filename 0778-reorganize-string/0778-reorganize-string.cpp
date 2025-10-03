class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mpp;
        for(auto i: s){
            mpp[i]++;
        }
       string ans="";
        priority_queue<pair<int,char>>pq;
        for(auto [x,y]:mpp){
            pq.push({y,x});
        }

        while(!pq.empty()){
           if(pq.size()==1){
              break;
           }    
            int x1=pq.top().first;
            char y1=pq.top().second;
            pq.pop();
            int x2=pq.top().first;
            char y2=pq.top().second;
            pq.pop();
            ans+=y1;
            ans+=y2;
            x1--;
            x2--;
            if(x1>0){
                pq.push({x1,y1});
            }
            if(x2>0){
                pq.push({x2,y2});
            }
        }

    if(!pq.empty()){
    if(pq.top().first > 1) return "";
    ans += pq.top().second; // add the last char
}

    
        return ans;
    }
};