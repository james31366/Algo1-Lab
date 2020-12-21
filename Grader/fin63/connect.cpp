#include <iostream>

using namespace std;

int main()
{
    int l, n, t;
    char words[n+1][l+1];

    cin >> l >> n >> t;

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    for (auto w : words)
    {
        cout << w << endl;
    }
}