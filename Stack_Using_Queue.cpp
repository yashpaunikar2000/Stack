class MyStack {
public:
queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        // now if q1 is empty then swap else just push q1 values in q2
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        // if q1 is empty, just swap
        swap(q1,q2);
    }
    
    int pop() {
        int val=q1.front();
        q1.pop();
        return val; 
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
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
