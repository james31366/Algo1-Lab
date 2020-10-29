#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *p;

    p = &x;
    cout << x << endl;
    cout << p << endl;
    cout << *p << endl;
    *p += 10;
    cout << "" << endl;
    cout << "After *p += 10" << endl;
    cout << *p << endl;
    cout << x << endl;
    cout << &p << endl;
}