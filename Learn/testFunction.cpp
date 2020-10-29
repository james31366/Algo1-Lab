#include <iostream>

using namespace std;

void inc(int *y)
{
    cout << *y << endl;
    (*y)++;
    cout << y << endl;
}

int main()
{
    int x = 10;

    cout << x << endl;
    inc(&x);
    cout << x << endl;
}