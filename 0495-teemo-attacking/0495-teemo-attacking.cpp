class Solution {
public:
    int findPoisonedDuration(vector<int>& time, int dur) {
        int total=0;
        int n=time.size();
        for(int i=1;i<n;i++){
            total+=min(dur,time[i]-time[i-1]);
        }
        total+=dur;
        return total;
    }
};