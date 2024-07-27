#include <iostream>
#include <vector>
#include <queue>

using namespace std;


class KthLargest {
public:
    KthLargest(int k, vector<int>& nums) 
    {
        m_k = k;
        m_nums = nums;
        for(auto& x : nums)
        {
            m_q.push(x);
        }
        while(m_q.size() > k)
        {
            m_q.pop();
        }
    }

    int add(int val) 
    {
        m_q.push(val);
        
        if(m_q.size() > m_k) m_q.pop();

        return m_q.top();
    }
private:
    priority_queue<int, vector<int>, greater<int> > m_q;
    int m_k;
    vector<int> m_nums;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

int main()
{   
    vector<int> nums = { 0 };
    KthLargest* kthLargest = new KthLargest(2, nums);
    cout << kthLargest->add(-1) << "\n";   // return 4
    cout << kthLargest->add(1) << "\n";   // return 5
    cout << kthLargest->add(-2) << "\n";  // return 5
    cout << kthLargest->add(-4) << "\n";   // return 8
    cout << kthLargest->add(3) << "\n";   // return 8

    return 0;
}