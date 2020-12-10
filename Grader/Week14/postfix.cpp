#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef double ValueType;
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
    else
    {
        throw "Error empty stack";
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

main()
{
    string buffer;

    Stack operands;

    do
    {
        cin >> buffer;
        if (buffer.at(0) == '=')
        {
            break;
        }
        else if ((buffer.at(0) >= '0') && (buffer.at(0) <= '9'))
        {
            double val = stod(buffer);
            // insert val into the top of the stack
            operands.push(val);
        }
        else
        {
            ValueType b = operands.pop();
            ValueType a = operands.pop();
            double val = 0;
            switch (buffer.at(0))
            {
            case '+':
                val = a + b;
                break;

            case '-':
                val = a - b;
                break;

            case '*':
                val = a * b;
                break;

            case '/':
                val = a / b;
                break;
            }
            operands.push(val);
        }
    } while (true);
    cout << fixed << setprecision(4) << operands.top() << endl;
}
