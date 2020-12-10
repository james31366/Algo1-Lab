#include <iostream>

using namespace std;
int main()
{
    int n = 0;
    cin >> n;

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int xp = 0;
        cin >> xp;
        if ((i + 1) % 4 == 0)
        {
            xp *= 2;
        }
        result += xp;
    }
    cout << result;
    return 0;
}
