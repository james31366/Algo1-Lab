#include <iostream>

using namespace std;

int main()
{
    int l, n, t;
    cin >> l >> n >> t;
    char words[n][l];

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    for (auto w : words)
    {
        cout << w << endl;
    }
}