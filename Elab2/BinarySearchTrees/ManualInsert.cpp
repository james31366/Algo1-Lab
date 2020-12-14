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

void inorder(TreeNode *r)
{
  /* the code for checking is hidden. */
}

int main()
{
  TreeNode *root = new TreeNode(20);

  TreeNode *r1 = new TreeNode(5);
  TreeNode *r2 = new TreeNode(40);
  TreeNode *r3 = new TreeNode(35);
  TreeNode *r4 = new TreeNode(7);

  root->left = r1;
  root->right = r2;
  r2->left = r3;
  r1->right = r4;

  inorder(root);
}