class Solution {
public:
    int compress(vector<char>& cs) {
        int n=cs.size();
        int index=0;
        int i=0;

        while(i<n){
            char cur=cs[i];
            int cnt=0;

            while(i<n && cur==cs[i]){
                cnt++;
                i++;
            }
            cs[index++]=cur;
            if(cnt>1){
                string x=to_string(cnt);
                for(char y:x){
                    cs[index++]=y;
                }
            }
        }
        return index;
    }
};