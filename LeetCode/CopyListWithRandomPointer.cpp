#include <iostream>
#include <unordered_map>

using namespace std;



class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        unordered_map<Node*, Node*> origToCopy;
        origToCopy[NULL] = NULL;
        Node* curr = head;
        while(curr != NULL)
        {
            Node* copy = new Node(curr->val);
            origToCopy[curr] = copy;
            curr = curr->next;
        }

        curr = head;
        while(curr != NULL)
        {
            Node* copy = origToCopy[curr];
            copy->next = origToCopy[curr->next];
            copy->random = origToCopy[curr->random];
            curr = curr->next;
        }
        return origToCopy[head];
    }
};


int main()
{

    Node* one = new Node(1);
    Node* two = new Node(2);

    one->next = two;
    one->random = two;

    two->next = NULL;
    two->random = two;

    cout << one->next->val << "\n";
    cout << one->random->val << "\n";
    cout << one->next->random->val << "\n";
    cout << "\n";
    
    Solution sln;
    Node* deepCopy = sln.copyRandomList(one);

    cout << deepCopy->next->val << "\n";
    cout << deepCopy->random->val << "\n";
    cout << deepCopy->next->random->val << "\n";

    return 0;
}