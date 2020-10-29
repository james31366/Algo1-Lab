#include <iostream>

using namespace std;

bool check_prime(int p)
{
    if (p <= 1)
    {
        return false;
    }
    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 0;
    cin >> n;
    int result = 0;
    for (int i = 1; i < n; i++)
    {
        if ((n % i) == 0 && check_prime(i))
        {
            result++;
        }
    }
    cout << result;
    return 0;
}
