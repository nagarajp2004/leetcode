class StockSpanner {
public:
stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int tot=0;
        while(!st.empty() && st.top().first <= price){
            tot+=st.top().second;
            st.pop();
        }
        st.push({price,tot+1});
        return st.top().second;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */