class Solution {
public:
    bool isvowel(char x){
        return x=='a' || x=='e'|| x=='i'|| x=='o' ||x=='u'; 
    }
     long long  atleast(string word,int k)
     {
       int n=word.size();
       unordered_map<char,int>mpp;
       int con=0;
       long long ans=0;
       int left=0;
       for(int i=0;i<n;i++){
          if(isvowel(word[i])){
            mpp[word[i]]++;
          }else{
            con++;
          }
                while(mpp.size()==5 && con>=k){
                    ans+=n-i;
                     if(isvowel (word[left]))
                     {
                             mpp[word[left]]--;
                             if(mpp[word[left]]==0){
                                mpp.erase(word[left]);
                             }
                    }else{
                        con--;
                    }
                    left++;
                }
       }
         return ans;
     }

    long long countOfSubstrings(string word, int k)
    {
         return atleast(word,k)-atleast(word,k+1);
    }
};