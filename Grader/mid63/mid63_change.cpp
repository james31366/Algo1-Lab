#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int x, y;
    int s[n];
    int amountS = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        s[i] = x - y;
        amountS += s[i];
    }

    for (int i = 0; i < k; i++)
    {
        int pos = 0;
        int minS = 0;
        for (int i = 0; i < n; i++)
        {
            if (minS > s[i] && s[i] < 0)
            {
                minS = s[i];
                pos = i;
            }
        }
        amountS -= minS;
        s[pos] = 0;
    }

    cout << amountS << endl;
}
