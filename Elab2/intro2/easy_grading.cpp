#include <iostream>
using namespace std;

main() {
    int grade;
    cin >> grade;

    if (grade >= 80) {
        cout << "Excellent job.";
    } else if (grade >= 50 && grade < 80) {
        cout << "Okay.";
    } else {
        cout << "Please try harder.";
    }
}
