#include <iostream>

using namespace std;

const int MAX_BUCKET = 5;

int find_min(int b[MAX_BUCKET])
{
    int min_idx = 0;
    for (int i = 0; i < MAX_BUCKET; i++)
    {
        if (b[min_idx] > b[i])
        {
            min_idx = i;
        }
    }
    return min_idx;
}

int main()
{
    int n = 0;
    cin >> n;
    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int b[MAX_BUCKET] = {0, 0, 0, 0, 0};
    int tank = 0;
    for (int i = 0; i < n; i++)
    {
        int min_idx = find_min(b);
        if (b[min_idx] < 1000)
        {
            b[min_idx] += x[i];
        }
        if (b[min_idx] >= 1000)
        {
            b[min_idx] = 1000;
            tank += b[min_idx];
            b[min_idx] = 0;
        }
    }

    cout << tank << endl;
}
