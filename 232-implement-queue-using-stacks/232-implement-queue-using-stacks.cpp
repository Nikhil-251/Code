class MyQueue {
    stack<int>inp,out;
public:
    MyQueue() {
    }
    
    void push(int x) {
        inp.push(x);
    }
    
    int pop() {
        if(out.empty()){
            while(!inp.empty()){
                out.push(inp.top());
                inp.pop();
            }
        }
        int x = out.top();
        out.pop();
        return x;
    }
    
    int peek() {
        if(out.empty()){
            while(!inp.empty()){
                out.push(inp.top());
                inp.pop();
            }
        }
        int x = out.top();
        return x;
    }
    
    bool empty() {
        return (out.empty() && inp.empty());
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