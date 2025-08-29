class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string ans;
        int i1=0;
        int i2=0;
        int n1=w1.size();
        int n2=w2.size();
        int count=0;
        while(i1< n1 && i2<n2){
            if(count%2==0){
               ans.push_back(w1[i1]);
               i1++;
            }else{
               ans.push_back(w2[i2]);
               i2++;
            }
            count++;
        }
        while(i2 < n2){
            ans.push_back(w2[i2++]);
        }

          while(i1 < n1){
            ans.push_back(w1[i1++]);
        }
        return ans;
    }
};