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

void free_list(ListNode *&header)
{
}

int main()
{
    ListNode *first_header = 0;
    for (int i = 0; i < 5; i++)
    {
        ListNode *header = new ListNode(0);
        if (!first_header)
        {
            first_header = header;
        }
        for (int j = 0; j < 100000; j++)
        {
            insert_front(header, j);
        }
        free_list(header);
    }
    ListNode *new_header = new ListNode(0);
    new_header = new ListNode(0);
    new_header = new ListNode(0);
    int dist = abs(new_header - first_header);
    if (dist < 100)
    {
        cout << "ok" << endl;
    }
    else
    {
        cout << "not ok" << endl;
    }
    return 0;
}