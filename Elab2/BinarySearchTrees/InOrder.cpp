#include <iostream>

using namespace std;

typedef int valueType;

struct TreeNode
{
    valueType val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(valueType val, TreeNode *left = 0, TreeNode *right = 0)
        : val(val), left(left), right(right) {}
};

void inOrder(TreeNode *r)
{
    if (!r)
    {
        return;
    }
    inOrder(r->left);
    cout << r->val << endl;
    inOrder(r->right);
}

int main()
{
    auto *root = new TreeNode(20);

    auto *r1 = new TreeNode(5);
    auto *r2 = new TreeNode(40);
    auto *r3 = new TreeNode(35);
    auto *r4 = new TreeNode(7);

    root->left = r1;
    root->right = r2;
    r2->left = r3;
    r1->right = r4;

    inOrder(root);
}