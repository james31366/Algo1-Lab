#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int x[n];
    int b[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < 4; j++) {
            if (b[j] > b[j + 1]) {
                b[j] = x[i];

                break;
            }
        }
    }


    return 0;
}
