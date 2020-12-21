#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int ans = 0;
    map<int, int> counts;
    vector<int> tripple;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        tripple.push_back(a);
    }
    for (auto i : tripple)
        ++counts[i];

    for (auto i = counts.begin(); i != counts.end(); i++)
    {
        if (i->second >= 3)
        {
            ans++;
        }
    }
    cout << ans << endl;
}