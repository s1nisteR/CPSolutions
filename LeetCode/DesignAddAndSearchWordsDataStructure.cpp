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

    bool getEnd() { return end; }
    void setEnd() { end = true; }
    TrieNode* getChild(int i) { return children[i]; }
    void setChild(TrieNode *pChild, int i) { children[i] = pChild; }

private:
    bool end;
    TrieNode* children[26];
};


class WordDictionary 
{
public:
    WordDictionary() 
    {
        m_trie = new TrieNode(); 
    }
    
    void addWord(string word) 
    {
        TrieNode* explorerNode = new TrieNode();
        explorerNode = m_trie;
        for(size_t i = 0; i < word.size(); i++)
        {
            int idx = word[i] - 'a';
            if(explorerNode->getChild(idx) == nullptr)
            {
                TrieNode* temp = new TrieNode();
                explorerNode->setChild(temp, idx);
            }
            explorerNode = explorerNode->getChild(idx);
        }
        explorerNode->setEnd();
    }
    
    bool search(string word) 
    {
        return _search(m_trie, 0, word);
    }
private:
    TrieNode* m_trie;

    bool _search(TrieNode* explorer, int start, string word)
    {
        for(size_t i = start; i < word.size(); i++)
        {
            if(word[i] == '.')
            {
                for(int j = 0; j < 26; j++)
                {
                    if(explorer->getChild(j) == nullptr) continue;
                    if(_search(explorer->getChild(j), i + 1, word)) return true;
                }
                return false;
            }
            int idx = word[i] - 'a';
            if(explorer->getChild(idx) == nullptr) return false;
            explorer = explorer->getChild(idx);
        }

        if(explorer->getEnd()) return true;
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */

int main()
{
    WordDictionary* wordDictionary = new WordDictionary();
    wordDictionary->addWord("a");
    wordDictionary->addWord("a");
    /*
    cout << wordDictionary->search(".") << "\n";
    cout << wordDictionary->search("a") << "\n";
    cout << wordDictionary->search("aa") << "\n"; 
    cout << wordDictionary->search(".a") << "\n"; 
    */
    cout << wordDictionary->search("a.") << "\n"; 


    return 0;
}