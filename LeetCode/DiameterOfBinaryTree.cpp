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
    int diameterOfBinaryTree(TreeNode* root) 
    {
        height(root);
        return diameter;
    }
private:
    int diameter = 0;

    int height(TreeNode* root)
    {
        if(root == nullptr) return 0;

        int left = height(root->left);
        int right = height(root->right);

        diameter = max(diameter, left + right);

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
    cout << sln.diameterOfBinaryTree(root) << "\n";


    return 0;
}