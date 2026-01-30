class MyStack {
public:
    queue<int> main_q;
    queue<int> temp_q;
    MyStack() {
        
    }
    
    void push(int x) {
        while(!main_q.empty()){
            temp_q.push(main_q.front());
            main_q.pop();
        }
        main_q.push(x);
        while(!temp_q.empty()){
            main_q.push(temp_q.front());
            temp_q.pop();
        }
    }
    
    int pop() {
        int x = main_q.front();
        main_q.pop();
        return x;
    }
    
    int top() {
        return main_q.front();
    }
    
    bool empty() {
        if(main_q.empty()) return true;
        else return false;
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