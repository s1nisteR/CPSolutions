#include <iostream>
#include <stack>
#include <utility>

using namespace std;

class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        //current top() element has the minimum found so far
        
        //but first handle when the stack is empty
        if(this->m_stack.empty()) { this->m_stack.push({val, val}); return; }

        //otherwise do it normally by checking the top()'s second element to find the current minimum so far
        if(!this->m_stack.empty() && val < this->m_stack.top().second)
        {
            this->m_stack.push({val, val});
        }
        else
        {
            this->m_stack.push({val, this->m_stack.top().second});
        }

    }
    
    void pop() {
        this->m_stack.pop();
    }
    
    int top() {
        return this->m_stack.top().first;
    }
    
    int getMin() {
        return this->m_stack.top().second;
    }

private:
    stack<pair<int, int> > m_stack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main()
{
    MinStack* minStack = new MinStack();
    minStack->push(-2);
    minStack->push(0);
    minStack->push(-3);
    cout << minStack->getMin() << "\n"; // return -3
    minStack->pop();
    cout << minStack->top() << "\n";    // return 0
    cout << minStack->getMin() << "\n"; // return -2

    return 0;
}