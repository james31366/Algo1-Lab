#include <iostream>
using namespace std;

int main() {
    int n;
    char t;
    int m;
    int max_height;
    int c[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        max_height = 0;
        cin >> t >> m;
        if (t == '-') {
            for (int j = m - 1; j < m + 3; ++j) {
                if (max_height < c[j]) {
                    max_height = c[j];
                }
            }
            for (int j = m - 1; j < m + 3; j++) {
                c[j] = max_height + 1;
            }
        }
        if (t == 'i') {
            c[m - 1] += 4;
        }
        if (t == 'o') {
            for (int j = m - 1; j < m + 1; ++j) {
                if (max_height < c[j]) {
                    max_height = c[j];
                }
            }
            for (int j = m - 1; j < m + 1; j++) {
                c[j] = max_height + 2;
            }
        }
    }

    for (int i : c) {
        if (max_height < i) {
            max_height = i;
        }
    }
    cout << max_height;
}