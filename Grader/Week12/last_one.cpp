#include <iostream>

using namespace std;
typedef int valueType;

struct ListNode
{
    valueType val;
    ListNode *next;

    ListNode(valueType val, ListNode *next = nullptr)
        : val(val), next(next) {}
};

void extract_node(ListNode *header)
{
    ListNode *temp = header->next;
    header->next = header->next->next;
    delete (temp);
}

void insert(ListNode *header, valueType val)
{
    ListNode *nx = new ListNode(val);
    nx->next = header->next;
    header->next = nx;
}

ListNode *create_table(int N)
{
    ListNode *header = new ListNode(1);
    ListNode *temp = header;

    for (int i = 1; i < N; i++)
    {
        insert(header, i + 1);
        header = header->next;
    }
    header->next = temp; // Let be circular.
    return header;
}

int main()
{
    int N, K;
    cin >> N >> K;
    ListNode *header = create_table(N);
    int count = N;
    int mod = K % N;
    while (count != 1)
    {
        if (mod == 0)
        {
            mod = K;
        }
        else if (count != 1)
        {
            for (int i = 0; i < mod - 1; i++)
            {
                header = header->next;
            }
            extract_node(header);
            count--;
            mod = K % count;
        }
    }
    cout << header->val << endl;
}
