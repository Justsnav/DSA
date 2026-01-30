class MyQueue {
public:
    stack<int> main_st;
    stack<int> temp_st;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!main_st.empty()){
            temp_st.push(main_st.top());
            main_st.pop();
        }
        main_st.push(x);
        while(!temp_st.empty()){
            main_st.push(temp_st.top());
            temp_st.pop();
        }
    }
    
    int pop() {
        int x = main_st.top();
        main_st.pop();
        return x;
    }
    
    int peek() {
        return main_st.top();
    }
    
    bool empty() {
        if(main_st.empty()) return true;
        else return false;
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