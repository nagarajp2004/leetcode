class Solution {
public:
     int comparestr(string a, string b) {
    int n = a.size(), m = b.size();
    if (abs(n - m) != 1) {
        return 0; // Lengths must differ by exactly 1
    }

    // Ensure `a` is the shorter string
    if (n > m) {
        swap(a, b);
        swap(n, m);
    }

    int i = 0, j = 0, diff = 0;

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            i++;
        } else {
            diff++;
            if (diff > 1) return 0; // More than one mismatch
        }
        j++; // Always increment `j` for the longer string
    }

    return 1; // Valid predecessor
}


    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),[](const string& a,const string& b){
            return a.size()<b.size();
        });
         vector<int>vt(words.size(),1);
         int n=words.size();
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<i;j++)
            {
                if(comparestr(words[i],words[j]) && vt[i]<vt[j]+1)
                {
                    vt[i]=vt[j]+1;
                }
            }
         }
         int maxi=0;
         for(auto i:vt){
          maxi=max(maxi,i);
         }
           return maxi;
    }
};