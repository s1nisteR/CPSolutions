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


class Solution 
{
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        _traverseAndInvert(root);
        return root;
    }
private:
    void _traverseAndInvert(TreeNode* root)
    {
        if(root == nullptr) return;

        _traverseAndInvert(root->left);
        _traverseAndInvert(root->right);

        TreeNode* tmp = root->right;
        root->right = root->left;
        root->left = tmp;   
    }
};

int main()
{
    TreeNode* root = new TreeNode(4);
    TreeNode* two = new TreeNode(2);
    TreeNode* seven = new TreeNode(7);
    TreeNode* one = new TreeNode(1);
    TreeNode* three = new TreeNode(3);
    TreeNode* six = new TreeNode(6);
    TreeNode* nine = new TreeNode(9);

    root->left = two;
    two->left = one;
    two->right = three;

    root->right = seven;
    seven->left = six;
    seven->right = nine;

    Solution sln;
    TreeNode* newRoot = sln.invertTree(root);

    return 0;
}