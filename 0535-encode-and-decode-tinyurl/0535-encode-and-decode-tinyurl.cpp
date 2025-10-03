class Solution {
public:

    // Encodes a URL to a shortened URL.

    unordered_map<string,string>st;
    string x="https://leetcode.com/aaaaa";
    int ind=x.size()-1;

    string encode(string longUrl) {
           if(x[ind]=='z'){
            ind=ind-1;
           }
           x[ind]++;
           st[x]=longUrl;
            return x;    
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return st[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));