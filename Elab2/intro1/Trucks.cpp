#include <iostream>

using namespace std;

int main()
{
    const int LOAD_LIMITS = 1000;
    int n;
    cin >> n;
    int package_array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> package_array[i];
    }

    int ans = 0;
    int truck_load = 0;
    for (int i = 0; i < n; i++)
    {
        truck_load += package_array[i];
        if (truck_load > LOAD_LIMITS)
        {
            truck_load = package_array[i];
            ans++;
        }
        if (i == n - 1)
        {
            ans++;
        }
    }
    cout << ans;
}
