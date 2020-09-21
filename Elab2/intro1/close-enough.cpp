#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int j[n];
    for (int i = 0; i < n; i++) {
        cin >> j[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int k = i + 1; k < n; k++) {
            int dis = abs(j[i] - j[k]);
            if (dis <= l) { ans++; }
        }
    }
    cout << ans;
}
