class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int i=0;
        int n=s.size();
        int j=n-1;

        int move=0;

        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
                continue;
            }

            int k=j;
            while(k>i && s[i]!=s[k]){
                k--;
            }

            if(k==i){
                swap(s[k],s[k+1]);
                move++;
            }else{
                while(k<j){
                    swap(s[k],s[k+1]);
                    k++;
                     move++;
                }
                i++;
                j--;
               
            }
        }
        return move;
    }
};