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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> k;
        cin >> x;
        switch (k)
        {
        case 1:
            insert(root, x);
            break;

        case 2:
            if (find(root, x))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
            break;
        }
    }
}