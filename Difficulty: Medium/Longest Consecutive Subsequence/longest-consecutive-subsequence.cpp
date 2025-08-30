class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int>st;
        for(auto i:arr){
            st.insert(i);
        }
        int maxi=0;
        
        for(auto i:arr){
            int cnt=0;
            int x=i;
            if(st.find(x)!=st.end() && st.find(x-1)==st.end()){
                
                while(st.find(x)!=st.end()){
                    st.erase(x);
                    x=x+1;
                    cnt++;
                }
            }
            
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};