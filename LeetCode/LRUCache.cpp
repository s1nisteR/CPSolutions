#include <unordered_map>
#include <iostream>

using namespace std;



typedef struct Node
{
    int key;
    int val;
    Node* next;
    Node* prev;
} Node;



class LRUCache {
public:
    LRUCache(int capacity) 
    {
        head = new Node();
        tail = new Node();
        head->next = tail;
        head->prev = nullptr;
        tail->prev = head;
        tail->next = nullptr;
        m_capacity = capacity;
    }
    
    int get(int key) 
    {
        if(keyToNode.find(key) != keyToNode.end())
        {
            //if it does exist
            Node* node = keyToNode[key];
            remove(node);
            insert(node);
            return node->val;
        }
        return -1;
    }
    
    void put(int key, int value) 
    {
        if(keyToNode.find(key) != keyToNode.end())
        {
            //already exists
            remove(keyToNode[key]);
        }
        Node* node = new Node();
        node->key = key;
        node->val = value;
        keyToNode[key] = node;
        insert(node);

        if(keyToNode.size() > m_capacity)
        {
            Node* toBeRemoved = tail->prev;
            keyToNode.erase(toBeRemoved->key);
            remove(toBeRemoved);
        }


    }
private:
    int m_capacity;
    Node* head;
    Node* tail;
    unordered_map<int, Node*> keyToNode;

    void insert(Node* node)
    {
        head->next->prev = node;
        node->next = head->next;
        head->next = node;
        node->prev = head;
    }

    void remove(Node* node)
    {
        node->prev->next = node->next;
        node->next->prev = node->prev;
        //delete(node);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */


int main()
{
    LRUCache* lRUCache = new LRUCache(1);
    lRUCache->put(1, 1); // cache is {1=1}
    lRUCache->put(2, 2); // cache is {1=1, 2=2}
    cout << lRUCache->get(1) << "\n";    // return 1
    lRUCache->put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
    cout << lRUCache->get(2) << "\n";    // returns -1 (not found)
    lRUCache->put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
    cout << lRUCache->get(1) << "\n";    // return -1 (not found)
    cout << lRUCache->get(3) << "\n";    // return 3
    cout << lRUCache->get(4) << "\n";    // return 4

    return 0;
}