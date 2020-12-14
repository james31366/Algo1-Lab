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

void insert(TreeNode *&r, valueType x)
{
    if (!r)
    {
        r = new TreeNode(x);
    }
    else if (x < r->val)
    {
        insert(r->left, x);
    }
    else if (x > r->val)
    {
        insert(r->right, x);
    }
}

TreeNode *find(TreeNode *r, valueType x)
{
    if (!r)
    {
        return 0;
    }
    else if (r->val == x)
    {
        return r;
    }
    else if (r->val < x)
    {
        find(r->right, x);
    }
    else
    {
        find(r->left, x);
    }
}

main()
{
    TreeNode *root = 0;

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert(root, x);
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        if (find(root, x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}