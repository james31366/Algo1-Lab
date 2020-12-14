#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        num[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; count < n; j++)
        {
            if (j > n - 1)
            {
                j = 0;
            }
            if (count < n-1)
            {
                cout << num[j];
                count++;
            }
            else if (count == n-1)
            {
                cout << num[j] << endl;
                count++;
            }
        }
        count = 0;
    }
}