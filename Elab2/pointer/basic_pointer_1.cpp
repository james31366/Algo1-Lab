#include <iostream>
using namespace std;

main() {
    int a[5] = {1, 2, 3, 4, 5};

    int *p = a;

    // Show value of the pointer that point at.
    //! But pointer not move
    cout << *p << endl;
    cout << *(p + 3) << endl;//* Show value of the pointer that point at +3.

    p += 3;//* move pointer to next 3 block.

    cout << *p << endl;
    cout << *(p - 1) << endl;

    int *q = &a[5];

    cout << q - p << endl;
}