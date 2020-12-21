#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool sortBySec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    vector<pair<int, int>> interval;
    int disjointInterval = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        interval.push_back(make_pair(a, b));
    }

    sort(interval.begin(), interval.end(), sortBySec);

    int r1 = interval[0].second;
    disjointInterval++;

    for (int i = 0; i < interval.size(); i++)
    {
        int l1 = interval[i].first;
        int r2 = interval[i].second;

        if (l1 > r1)
        {
            disjointInterval++;
            r1 = r2;
        }
    }

    cout << disjointInterval << endl;
}