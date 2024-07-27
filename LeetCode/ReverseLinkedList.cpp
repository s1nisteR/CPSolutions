#include <iostream>

using namespace std;


struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

//iterative method
class Solution {
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* previous = nullptr;
        ListNode* current = head;
        ListNode* nextTemp = nullptr;
        while(current != nullptr)
        {
            nextTemp = current->next;
            current->next = previous;
            previous = current;
            current = nextTemp;
        }
        return previous;
    }
};


int main()
{
    Solution sln;
    ListNode* five = new ListNode(5, nullptr);
    ListNode* four = new ListNode(4, five);
    ListNode* three = new ListNode(3, four);
    ListNode* two = new ListNode(2, three);
    ListNode* one = new ListNode(1, two);
    
    ListNode* newHead = sln.reverseList(one);
    
    //print the entire list
    while(newHead != nullptr)
    {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
    


    delete(one);
    delete(two);
    delete(three);
    delete(four);
    delete(five);
    


    return 0;
}