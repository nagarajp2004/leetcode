  #include<iostream>
  #include<string>
  #include <algorithm> 
  using namespace std;
  string addStrings(string num1, string num2) {
             int ind1=num1.size()-1,ind2=num2.size()-1;
               int car=0,x;
               string ans;
           if(num1.size()>num2.size()){
               while(ind2>=0){
                  x=(num1[ind1]-'0')+(num2[ind2]-'0')+car;
                  car=x/10;
                  char c='0'+(x%10);
                  ans+=c;
                  ind1--,ind2--;
               }
           while(ind1>=0){
               x=(num1[ind1]-'0')+car;
               car=x/10;
               char c='0'+(x%10);
               ans+=c;
               ind1--; 
           }
           }
             else {
               swap(num1,num2); 
                int ind1=num1.size()-1,ind2=num2.size()-1;
                   while(ind2>=0){
                  x=(num1[ind1]-'0')+(num2[ind2]-'0')+car;
                  car=x/10;
                  char c='0'+(x%10);
                  ans+=c;
                  ind1--,ind2--;
               }
           while(ind1>=0){
               x=(num1[ind1]-'0')+car;
               car=x/10;
               char c='0'+(x%10);
               ans+=c;
               ind1--; 
           } 
              
           }
reverse(ans.begin(),ans.end());          
return ans;

    }
int main(){
cout<<addStrings("43","");
} 