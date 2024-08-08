#include <iostream>
#include <queue>

using namespace std;


typedef struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
} TreeNode;


//recursive dfs solution
/*
class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if(root == nullptr) return 0;   //base case
        return (max(maxDepth(root->left), maxDepth(root->right)) + 1);  //recursive case
    }
};
*/

//BFS approach
class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        queue<TreeNode*> q;
        TreeNode* currentNode;
        int level = 0;
        q.push(root);
        while(!q.empty())
        {
            for(size_t i = 0; i < q.size(); i++)    //PATTERN: note how we are using level order traversal
            {
                currentNode = q.front();
                q.pop();
                if(currentNode->left != nullptr) q.push(currentNode->left);
                if(currentNode->right != nullptr) q.push(currentNode->right);
            }
            //BFS Pattern: this executes after completion of an entire level
            level++;
        }
        return level;
    }
};




int main()
{
    TreeNode *root = new TreeNode(3);
    TreeNode *nine = new TreeNode(9);
    TreeNode *twenty = new TreeNode(20);
    TreeNode *fifteen = new TreeNode(15);
    TreeNode *seven = new TreeNode(7);

    root->left = nine;
    root->right = twenty;
    
    twenty->left = fifteen;
    twenty->right = seven;

    Solution sln;
    cout << sln.maxDepth(root) << "\n";

    return 0;
}