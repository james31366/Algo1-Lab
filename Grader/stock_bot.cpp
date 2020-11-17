#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int p[N];
    int total = 0;
    int buy = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }
    for (int i = 1; i < N; i++)
    {
        if (p[i] - p[i - 1] >= K && buy == 0)
        {
            buy = p[i];
        }
        else if (p[i - 1] - p[i] >= K && buy != 0)
        {
            total += p[i] - buy;
            buy = 0;
        }
    }
    cout << total << endl;
}
