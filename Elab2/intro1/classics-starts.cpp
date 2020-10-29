#include <iostream>

using namespace std;

void classic_starts(int n)
{
    for (int i = 1; i <= n; i++)
    {
        std::cout.width(n);
        std::cout << std::right << string(i, '*') << endl;
    }
}

int main()
{
    int n = 0;
    cin >> n;
    classic_starts(n);
    return 0;
}
