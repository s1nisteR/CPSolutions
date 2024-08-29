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

class Solution 
{
public:
    void reorderList(ListNode* head) 
    {
        //fast and slow pointer to find the middle node
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        //after this loop is done our slow->next pointer should point to the middle of the linked list
        
        //reverse the links from the end to this node
        ListNode* secondHalf = slow->next;
        slow->next = nullptr; //very important to act as the termination of the first half of the list
        ListNode* prev = nullptr;
        while(secondHalf != nullptr)
        {
            ListNode* temp = secondHalf->next;
            secondHalf->next = prev;
            prev = secondHalf;
            secondHalf = temp;
        }

        //now do the merging
        ListNode* firstHalf = head;
        ListNode* secondHalfHead = prev;

        while(secondHalfHead != nullptr)
        {
            ListNode* tmp = secondHalfHead->next;
            secondHalfHead->next = firstHalf->next;
            firstHalf->next = secondHalfHead;

            firstHalf = secondHalfHead->next;
            secondHalfHead = tmp;
        }
    }
};


int main()
{
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(2);
    ListNode* three = new ListNode(3);
    ListNode* four = new ListNode(4);
    ListNode* five = new ListNode(5);
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    Solution sln;
    sln.reorderList(one);

    while(one != nullptr)
    {
        cout << one->val << "\n";
        one = one->next;
    }

    return 0;
}