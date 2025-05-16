class MinStack {
public:
stack<int>st,minstack;
    MinStack() {
        
    }
    
    void push(int val) {
        if(minstack.empty() || val<=minstack.top()){
            minstack.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(st.top()==minstack.top()){
            minstack.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
