#include <iostream>

using namespace std;

int findMaxPosition(const int x[], const int y[], int n)
{
    int pos = 0;
    int yVal = 0;
    for (int i = 0; i < n; i++)
        if (y[i] > x[i])
        {
            if (y[i] > yVal)
            {
                pos = i;
                yVal = y[i];
            }
        }
    return pos;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    int s[n];
    for (int i = 0; i < n; i++)
    {
        s[i] = x[i] + y[i];
    }
    for (int i = 0; i < k; i++)
    {
        int pos = findMaxPosition(x, y, n);
        if (pos == 0)
        {
            if (y[pos] > x[pos])
            {
                x[pos] = 0;
                y[pos] = 0;
            }
        }
        else
        {
            x[pos] = 0;
            y[pos] = 0;
        }
    }

    int amountX = 0;
    int amountY = 0;
    for (int i = 0; i < n; i++)
    {
        amountX += x[i];
        amountY += y[i];
    }

    cout << amountX - amountY << endl;
}