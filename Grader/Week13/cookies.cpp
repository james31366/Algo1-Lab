#include <iostream>

using namespace std;
typedef int valueType;

struct ListNode
{
    valueType id;
    ListNode *next;

    ListNode(valueType id, ListNode *next = NULL)
        : id(id), next(next) {}
};

void print_list(ListNode *node)
{
    while (node != 0)
    {
        cout << node->id << endl;
        node = node->next;
    }
}

void insert_node(ListNode *header, valueType id, int idx)
{
    ListNode *pointer = header;
    for (int j = 0; j < idx; j++)
    {
        if (pointer->next != 0)
        {
            pointer = pointer->next;
        }
        else
        {
            break;
        }
    }
    ListNode *nx = new ListNode(id, pointer->next);
    pointer->next = nx;
}

void extract_node(ListNode *header, int idx)
{
    ListNode *pointer = header;
    for (int i = 0; i < idx; i++)
    {
        if (pointer->next != 0)
        {
            if (i < idx - 1)
                pointer = pointer->next;
        }
        else
        {
            return;
        }
    }
    ListNode *temp = pointer->next;
    pointer->next = pointer->next->next;
    delete (temp);
}

int main()
{
    int t;
    int l;
    int idx;
    int id;
    ListNode *header = new ListNode(0);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> l;
        cin >> idx;
        if (l == 1)
        {
            cin >> id;
            insert_node(header, id, idx);
        }
        else if (l == 2)
        {
            extract_node(header, idx);
        }
    }
    print_list(header->next);
}