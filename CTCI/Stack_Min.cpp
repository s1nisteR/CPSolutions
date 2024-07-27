#include <iostream>
#include <stack>


using namespace std;


class StackMin
{
public:
    StackMin() {}
    void push(int data) 
    { 
        this->m_stack.push(data);
        if(m_min.empty() || data < m_min.top()) m_min.push(data);
    }
    int pop() 
    {
        int t = m_stack.top();
        if(t == m_min.top())
        {
            m_stack.pop();
            m_min.pop();
            return t;
        } 
        else
        {
            m_stack.pop();
            return t;
        }
    }
    int top() { return m_stack.top(); }
    int min() { return m_min.top(); }
private:
    stack<int> m_stack;
    stack<int> m_min;
};


int main()
{
    StackMin m_StackMin;

    m_StackMin.push(10);
    m_StackMin.push(9);
    m_StackMin.push(8);
    m_StackMin.push(7);
    m_StackMin.push(6);
    m_StackMin.push(5);
    m_StackMin.push(4);
    m_StackMin.push(3);
    m_StackMin.push(2);

    cout << m_StackMin.pop() << "\n";
    cout << m_StackMin.min() << "\n";

    m_StackMin.push(-1);
    m_StackMin.push(2);

    cout << m_StackMin.top() << "\n";
    cout << m_StackMin.min() << "\n";

    return 0;
}