class Solution {
public:
    string largestOddNumber(string num) {
        
        int n=num.size();
        int i=n-1;
        while(i>=0){
           if((num[i]-'0')%2==1){
            break;
           }
           i--;
        }
        if(i>=0){
            return num.substr(0,i+1);
        }
        return "";
    }
};