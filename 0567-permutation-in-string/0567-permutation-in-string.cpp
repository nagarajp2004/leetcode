class Solution {
public:
    bool checkInclusion(string s1, string s2)
     {
        int n1=s1.size();
        int n2=s2.size();
        if(n2<n1){
            return false;
        }
        vector<int>hash1(27,-1);
        vector<int>hash2(27,-1);
        for(int i=0;i<n1;i++){
            hash1[s1[i]-'a']++;
        }
        int i=0;
        int j=n1;
        for(int i=0;i<j;i++){
            hash2[s2[i]-'a']++;
        }
        while(j<n2)
        {
          if(hash1==hash2){
            return true;
          }
          hash2[s2[i]-'a']--;
          hash2[s2[j]-'a']++;
          i++;
          j++;
        }
        if(hash1==hash2){
            return true;
        }
        return false;
    }
};