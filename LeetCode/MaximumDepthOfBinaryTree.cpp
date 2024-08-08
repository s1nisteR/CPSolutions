#include <iostream>

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

class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if(root == nullptr) return 0;

        int depthLeft = maxDepth(root->left);
        int depthRight = maxDepth(root->right);

        return (max(depthLeft, depthRight) + 1);
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