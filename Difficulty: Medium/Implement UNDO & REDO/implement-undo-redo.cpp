class Solution {
  public:
    int x=-1;
    stack<int>st;
    string str;
    
    void append(char x) {
        // append x into document
        str+=x;
    }

    void undo() {
        // undo last change
        int n=str.size();
         if(n>0){
        char x=str.back();
        st.push(x);
        str.pop_back();
         }
        
    }

    void redo() {
        if(st.size()){
            str+=st.top();
            st.pop();
        }
        // redo changes
    }

    string read() {
        // read the document
      return str;
    }
};