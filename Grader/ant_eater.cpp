#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n];
    int result = 0;

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++) {
        if (x[i] >= 1000) {
            x[i] = 1000;
            x[i + 1] = 0;
        }
        result += x[i];
    }

    cout << result;
    return 0;
}
