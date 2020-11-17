#include <iostream>

using namespace std;

typedef int valueType;

struct ListNode
{
    valueType ball_number;
    valueType colour;
    ListNode *next;

    ListNode(valueType ball_count, valueType colour, ListNode *next = 0)
        : ball_number(ball_count), colour(colour), next(next) {}
};

void insert_ball(ListNode *header, valueType colour, valueType ball_number, ListNode *arr[])
{
    ListNode *marble = new ListNode(ball_number + 1, colour);
    marble->next = header->next;
    header->next = marble;
    arr[ball_number] = marble;
}

void print_list(ListNode *node)
{
    while (node != NULL)
    {
        cout << node->ball_number << endl;
        node = node->next;
    }
}

// Array that keep all ball pointer.
ListNode *arr[2000030];

int main()
{
    int n, m;
    int colour, replace_index;
    int ball_count;

    ListNode *header = NULL;
    ListNode *last = header;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> colour;
        ball_count++;
        if (header == NULL)
        {
            // Assign header to first ListNode.
            header = new ListNode(ball_count, colour);
            // Assign last to new header.
            last = header;
            arr[ball_count - 1] = header;
        }
        else
        {
            insert_ball(last, colour, i, arr);
            last = last->next;
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> colour >> replace_index;
        ball_count++;
        insert_ball(arr[replace_index - 1], colour, n + i, arr);
    }
    print_list(header);
}
