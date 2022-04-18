class MyStack {
    queue<int>s;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        int q = s.size();
        s.push(x);
        for(int i=0;i<q;i++){
            s.push(s.front());
            s.pop();
        }
    }
    
    int pop() {
        int ans = s.front();
        s.pop();
        return ans;
    }
    
    int top() {
        return s.front();
    }
    
    bool empty() {
        if(s.size()==0)
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */