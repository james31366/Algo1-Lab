#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef string ValueType;
struct ListNode
{
    ValueType val;
    ListNode *next;
    ListNode(ValueType v, ListNode *nxt = 0)
        : val(v), next(nxt) {}
};

class Stack
{
private:
    ListNode *top_node;

public:
    Stack()
        : top_node(0) {}
    ~Stack();

    void push(ValueType v);
    ValueType pop();
    ValueType top() { return top_node->val; }
    bool is_empty() { return top_node == 0; }
};

void Stack::push(ValueType v)
{
    ListNode *new_node = new ListNode(v, top_node);
    top_node = new_node;
}

ValueType Stack::pop()
{
    if (top_node != 0)
    {
        ValueType val = top_node->val;

        ListNode *new_front = top_node->next;
        delete (top_node);
        top_node = new_front;

        return val;
    }
}

Stack::~Stack()
{
    while (top_node != 0)
    {
        ListNode *tmp = top_node;
        top_node = top_node->next;
        delete tmp;
    }
}

int main()
{
    int n;
    string queries;
    string name;

    Stack operands;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> queries;
        if (queries == "Sleep")
        {
            cin >> name;
            operands.push(name);
        }
        else if (queries == "Kick")
        {
            operands.pop();
        }
        else if (queries == "Test")
        {
            if (operands.is_empty())
            {
                cout << "Not in a dream" << endl;
            }
            else
            {
                cout << operands.top() << endl;
            }
        }
    }
}