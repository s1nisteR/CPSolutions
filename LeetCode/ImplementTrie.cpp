#include <string>
#include <iostream>

using namespace std;


class TrieNode
{
public:
    TrieNode()
    {
        end = false;
        for(int i = 0; i < 26; i++)
        {
            children[i] = nullptr;
        }
    }

    ~TrieNode()
    {
        for(int i = 0; i < 26; i++)
        {
            delete(children[i]);
        }
    }

    void setChild(TrieNode *pNext, int i) { children[i] = pNext; }
    void setEnd() { end = true; } 
    TrieNode* getChild(int i) { return children[i]; }
    bool getEnd() { return end; } 

private:
    TrieNode* children[26];
    bool end;
};


class Trie {
public:
    Trie() 
    {
        m_trie = new TrieNode();
    }

    ~Trie()
    {
        delete(m_trie);
    }
    
    void insert(string word) 
    {
        TrieNode* explorerNode = m_trie;
        for(size_t i = 0; i < word.size(); i++)
        {
            int idx = int(word[i] - 'a'); 
            if(explorerNode->getChild(idx) == nullptr)
            {
                TrieNode* tmp = new TrieNode();
                explorerNode->setChild(tmp, idx);
            }
            explorerNode = explorerNode->getChild(idx);
        }
        explorerNode->setEnd();
    }
    
    bool search(string word) 
    {
        TrieNode* explorerNode = m_trie;
        for(size_t i = 0; i < word.size(); i++)
        {
            int idx = word[i] - 'a';
            if(explorerNode->getChild(idx) == nullptr) return false;

            explorerNode = explorerNode->getChild(idx);
        }
        if(explorerNode->getEnd()) return true;
        return false;
    }
    
    bool startsWith(string prefix) 
    {
        TrieNode* explorerNode = m_trie;
        for(size_t i = 0; i < prefix.size(); i++)
        {
            int idx = prefix[i] - 'a';
            if(explorerNode->getChild(idx) == nullptr) return false;

            explorerNode = explorerNode->getChild(idx);
        }
        return true;
    }
private:
    TrieNode* m_trie;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

int main()
{
    Trie trie;
    /*
    trie.insert("apple");
    cout << trie.search("apple") << "\n";   // return True
    cout << trie.search("app") << "\n";     // return False
    cout << trie.startsWith("app") << "\n"; // return True
    trie.insert("app");
    cout << trie.search("app") << "\n";     // return True
    */
    trie.insert("a");
    trie.insert("a");
    return 0;
}