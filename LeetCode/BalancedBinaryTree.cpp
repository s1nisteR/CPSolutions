#include <iostream>
#include <algorithm>

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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) 
    {
        [[maybe_unused]] int tmp = dfs(root);
        return balanced;
    }
private:
    bool balanced = true;

    int dfs(TreeNode* root)
    {
        if(root == nullptr) return 0;

        int left = dfs(root->left);
        int right = dfs(root->right);

        if(abs(left - right) > 1)
        {
            this->balanced = false;
        }

        return 1 + max(left, right);
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
    cout << sln.isBalanced(root) << "\n";

    return 0;
}