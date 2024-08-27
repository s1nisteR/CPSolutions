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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* result = new ListNode();
        ListNode* explorerNode = result;

        while(list1 != nullptr && list2 != nullptr)
        {
            if(list1->val < list2->val)
            {
                explorerNode->next = list1;
                list1 = list1->next;
            }
            else
            {
                explorerNode->next = list2;
                list2 = list2->next;
            }
            explorerNode = explorerNode->next;
        }

        if(list1 != nullptr) explorerNode->next = list1;
        if(list2 != nullptr) explorerNode->next = list2;

        return result->next;
    }
};





int main()
{
    ListNode* list1Four = new ListNode(4);
    ListNode* list1Two = new ListNode(2);
    ListNode* list1 = new ListNode(1);
    list1->next = list1Two;
    list1Two->next = list1Four;

    ListNode* list2Four = new ListNode(4);
    ListNode* list2Three = new ListNode(3);
    ListNode* list2 = new ListNode(1);
    list2->next = list2Three;
    list2Three->next = list2Four;

    Solution sln;

    ListNode* result = sln.mergeTwoLists(list1, list2);

    while(result != nullptr)
    {
        cout << result->val << "\n";
        result = result->next;
    }

    return 0;
}