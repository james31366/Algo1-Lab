#include <iostream>

using namespace std;

bool check_prime(int p) {
    if (p <= 1) {
        return false;
    }
    for (int i = 2; i < p; i++) {
        if (p % i == 0)
            return false;
    }
    return true;
}

int next_prime(int p) {
    while (!check_prime(p)) {
        p++;
    }
    return p;
}

int main() {
    int p;
    cin >> p;
    p++;
    cout << next_prime(p) << endl;
}