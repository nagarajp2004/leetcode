class MyQueue {
public:
stack<int>s1;
stack<int>s2;

    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s2.empty()){
            while(s1.size() >1){
               s2.push(s1.top());
               s1.pop();
            }
            int ele=s1.top();
            s1.pop();
           return ele;
        }else{
            int ele=s2.top();
            s2.pop();
            return ele;
        }
        return -1;
    }
    
    int peek() {
        int ele;
         if(s2.empty()){
            while(s1.size() >0){
               s2.push(s1.top());
               s1.pop();
            }
             ele=s2.top();
          
        }else{
             ele=s2.top();   
        }
        return ele;
    }
    
    bool empty() {
       return s1.empty() && s2.empty(); 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */