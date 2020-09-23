#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;
    cin >> a;
    cin >> b;
    int sum = ((b * (b + 1)) / 2) - (((a * (a+1)) / 2)) + a;
    cout << sum;
    return 0;
}
