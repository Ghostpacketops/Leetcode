class MinStack {
private:
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);

        if (minSt.empty() || value <= minSt.top()) {
            minSt.push(value);
        }
    }
    
    void pop() {
        if (st.top() == minSt.top()) {
            minSt.pop();
        }

        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};