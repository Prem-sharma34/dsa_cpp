#include<iostream>
#include<stack>
#include<vector>

using namespace std;


class MinStack {
public:
   stack<int>st;
   int  mini;
    MinStack() {}
    
    void push(int val) {
        if(st.empty())
        {
            st.push(val);
            mini = val;
        }else
        {
            if(val > mini) st.push(val);
            else
                st.push(2*val-mini);
                mini = val;
            
        }
    }
    
    void pop() {
        if(st.empty()) return;

        int x = st.top();

        st.pop();

        if(x < mini)
        {
            mini = 2*mini - x;
        }
    }
    
    int top() {
        if(st.empty()) return -1;
        int x = st.top();

        if(mini < x) return x;

        return mini;
    }
    
    int getMin() {
       return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
