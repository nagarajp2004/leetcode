//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    void f(vector<vector<int>>& mat,vector<string>&ans,string path,vector<vector<bool>>&temp,int i,int j)
  {
      int n=mat.size();
      if(i==n-1 && j==n-1){
          ans.push_back(path);
          return;
      }
    
      
      int row[4]={-1,1,0,0};
      int col[4]={0,0,-1,1};
      string dir="UDLR";
     
      temp[i][j]=1;
      for(int k=0;k<4;k++){
          int ni=i+row[k];
          int nj=j+col[k];
          if((ni>=0) && (nj>=0)  && (ni<n) && (nj<n)){
              
              if((mat[ni][nj]==1) && (!temp[ni][nj]))
               f(mat,ans,path+dir[k],temp,ni,nj);
           }
      }
      temp[i][j]=0;
  }
  
    vector<string> findPath(vector<vector<int>> &mat)
    {
        int n=mat.size();
     vector<vector<bool>>temp(n,vector<bool>(n,0));
     vector<string>ans;
     if (mat[0][0] == 0 || mat[n - 1][n - 1] == 0) {
            return ans;
        }

     f(mat,ans,"",temp,0,0);
     return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends