class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        vector<int>sm1(26,0);
        vector<int>sm2(26,0);

        for(auto i: s1){
            sm1[i-'a']+=1;
        }
       
         

        for(int i=0;i<n2;i++){
          
            sm2[s2[i]-'a']++;
            if(i>=n1){
                sm2[s2[i-n1]-'a']--;
            }
            if(sm1==sm2){
                return true;
            }
        }
        return false;
    }
};