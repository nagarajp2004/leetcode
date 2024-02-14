// #include<iostream>
// #include<map>
// #include<cctype> // for isdigit function
// using namespace std;

// int main() {
   
//     string a, k;
//     getline(cin, a);
//     map<int, string> x;

//     for(int i = 0; i < a.size(); i++) {
//         // append current character to k

//         if (isdigit(a[i])) {

//             x[a[i] - '0'] = k; // store k in x at index corresponding to the digit
          
//             k.clear(); // clear k for next iteration
//             continue;
//         }
//        k += a[i];
       
//     }
// //i1 nagaraj3 am2
//     // Output x map
//     for(auto& l : x) {
//         cout << l.second;
//     }

//     return 0;
// }
// #include <iostream>
/*(#include <map>
#include <string>
using namespace std;

class Solution {
public:
    string sortSentence(string a) {
        string k;
        map<int, string> x;

        for (int i = 0; i < a.size(); i++) {
            if (isdigit(a[i])) {
                x[a[i] - '0'] = k; // store k in x at index corresponding to the digit
                k.clear(); // clear k for next iteration
                continue;
            }
            k += a[i];
        }

        a.clear();
      

        for (auto& l : x) {
          if(x.size()==1){
          return l.second; 
      } 

            a +=l.second;
            if(l.first==1){
                a+=" ";
            }
            
        }
     a.erase(0,1);
        return a;
    }
// }*/




