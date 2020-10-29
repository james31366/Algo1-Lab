#include <iostream>

using namespace std;

typedef int KeyType;

struct TreeNode
{
    KeyType k;
    TreeNode *left;
    TreeNode *right;

    TreeNode(KeyType k, TreeNode *l = 0, TreeNode *r = 0)
        : k(k), left(l), right(r) {}
};

void traverse(TreeNode *pNode)
{
    if (pNode == 0)
    {
        return;
    }
    traverse(pNode->left);
    traverse(pNode->right);
    cout << pNode << endl;
}

int main()
{
    TreeNode *n1 = new TreeNode(7);
    TreeNode *n2 = new TreeNode(10);
    TreeNode *n3 = new TreeNode(6, n1, n2);
    TreeNode *n4 = new TreeNode(4);
    TreeNode *n5 = new TreeNode(5, n4, n3);

    traverse(n5);
}
