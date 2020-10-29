#include <iostream>

using namespace std;

int main()
{
    int k = 0;
    cin >> k;
    while (k != 0)
    {

        int n = 0;
        int m = 0;
        cin >> n;
        cin >> m;

        for (int i = 0; i < k; i++)
        {
            int x = 0;
            int y = 0;
            cin >> x;
            cin >> y;

            if (x == n || y == m)
            {
                cout << "divisa" << endl;
            }
            else if (x > n && y > m)
            {
                cout << "NE" << endl;
            }
            else if (x < n && y > m)
            {
                cout << "NO" << endl;
            }
            else if (x < n && y < m)
            {
                cout << "SO" << endl;
            }
            else if (x > n && y < m)
            {
                cout << "SE" << endl;
            }
        }

        cin >> k;
    }
    return 0;
}
