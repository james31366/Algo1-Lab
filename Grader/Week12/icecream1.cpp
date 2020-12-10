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

ListNode *front;
ListNode *rear;

void init_queue()
{
    front = rear = 0;
}

void insert_queue(valueType v)
{
    ListNode *new_node = new ListNode(v);

    if (rear != 0)
    {
        rear->next = new_node;
        rear = new_node;
    }
    else
    {
        front = rear = new_node;
    }
}

valueType extract_queue()
{
    if (front != 0)
    {
        valueType v = front->id;

        ListNode *new_front = front->next;
        delete front;
        front = new_front;

        if (front == 0)
        {
            rear = 0;
        }

        return v;
    }
    else
    {
        throw "Error extract from empty queue";
    }
}

int main()
{
    int m;
    cin >> m;
    int count = 0;
    int t;
    int num;
    int id;
    for (int i = 0; i < m; i++)
    {

        cin >> t;

        if (t == 1)
        {
            cin >> num;
            for (int i = 0; i < num; i++)
            {
                cin >> id;
                insert_queue(id);
                count++;
            }
        }
        else if (t == 2)
        {
            cout << extract_queue() << endl;
            count--;
        }
    }
    cout << count << endl;
}
