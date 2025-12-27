/*
Problem 06: Rotate Array Left by 1

Approach:
- Store the first element
- Shift all elements one position to the left
- Place the first element at the end

Time Complexity:  O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void rotateLeftByOne(vector<int>& a) {
    int n = a.size();
    if (n <= 1) return;   // nothing to rotate

    int first = a[0];

    for (int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    a[n - 1] = first;
}

void printArray(const vector<int>& a) {
    for (int x : a) cout << x << " ";
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    rotateLeftByOne(a);

    cout << "Array after left rotation by 1:\n";
    printArray(a);

    return 0;
}
