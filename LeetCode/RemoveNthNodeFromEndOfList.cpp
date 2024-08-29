#include <iostream>

using namespace std;




 
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

/*
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* prev = head;
        ListNode* slow = head;
        ListNode* fast = head;

        while(n != 0 && fast != nullptr)
        {
            fast = fast->next;
            n--;
        }

        while(fast != nullptr)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        if(prev == slow)
        {
            head = slow->next;
        }
        else
        {
            prev->next = slow->next;
        }
 

        return head;
    }
};
*/

//a better solution utilizing dummy nodes
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* slow = dummy;
        ListNode* fast = head;

        while(n != 0 && fast != nullptr)
        {
            fast = fast->next;
            n--;
        }

        while(fast != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return dummy->next;
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
    ListNode* result = sln.removeNthFromEnd(one, 5);

    while(result != nullptr)
    {
        cout << result->val << "\n";
        result = result->next;
    }

    return 0;
}