#include <iostream>

using namespace std;

int main()
{
    const int LOAD_LIMITS = 1000;
    int n;
    int i;
    cin >> n;
    int package_array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> package_array[i];
    }

    int ans;
    int truck_load;
    while (i != n)
    {
        truck_load += package_array[i];
        if (truck_load >= LOAD_LIMITS)
        {
            truck_load = package_array[i];
            ans++;
        }
        else if (i == n - 1)
        {
            ans++;
        }
        i++;
    }
    cout << ans;
}
