

int ele = 0; // current minimum

void push(stack<int>& s, int a) {
    if (s.empty()) {
        ele = a;
        s.push(a);
    } 
    else if (a < ele) {
        // encode the value
        int val = 2*a - ele;
        s.push(val);
        ele = a;  // update new min
    } 
    else {
        s.push(a);
    }
}

bool isFull(stack<int>& s, int n) {
    return s.size() == n;
}

bool isEmpty(stack<int>& s) {
    return s.empty();
}

int pop(stack<int>& s) {
    if (s.empty()) return -1;

    int top = s.top();
    s.pop();

    if (top < ele) {
        // encoded value: actual popped element = ele
        int actual = ele;
        // restore old min
        ele = 2*ele - top;
        return actual;
    } 
    else {
        return top;
    }
}

int getMin(stack<int>& s) {
    if (s.empty()) return -1;
    return ele;
}
