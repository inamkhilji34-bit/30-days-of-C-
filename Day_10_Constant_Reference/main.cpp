#include <iostream>
#include <vector>
using namespace std;

// const ref — read only, cannot modify v
void printAll(const vector<int>& v) {
    cout << "Elements: ";
    for (const int& x : v)
        cout << x << " ";
    cout << endl;
}

// regular ref — can modify v directly
void doubleAll(vector<int>& v) {
    for (int& x : v)
        x *= 2;
}

// ref to a single variable
void increment(int& n) {
    n++;  // modifies the original variable
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    cout << "Before: ";
    printAll(nums);

    doubleAll(nums);

    cout << "After doubling: ";
    printAll(nums);

    // single variable reference demo
    int a = 10;
    int& ref = a;     // ref is an alias for a
    ref = 99;         // changing ref changes a too
    cout << "a = " << a << endl;  // prints 99

    increment(a);
    cout << "After increment: " << a << endl;  // prints 100

    return 0;
}