#include <iostream>

using namespace std;

typedef int colour;

struct ListNode
{
    colour val;
    ListNode *next;

    explicit ListNode(colour val, ListNode *next = nullptr)
        : val(val), next(next) {}
};

void print_list(ListNode *node)
{
    while (node != nullptr)
    {
        cout << node->val << endl;
        node = node->next;
    }
}

void insert_front(ListNode *header, colour x)
{
    ListNode *nx = new ListNode(x);
    nx->next = header->next;
    header->next = nx;
}

int main()
{
    ListNode *header = new ListNode(0);

    while (true)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            break;
        }
        insert_front(header, x);
    }

    print_list(header->next);
}