/*
Problem 05: Check if Array is Sorted (Non-decreasing)

Approach:
- Compare every element with the next one
- If any a[i] > a[i+1], array is NOT sorted

Time Complexity:  O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& a) {
    for (int i = 0; i + 1 < (int)a.size(); i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
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

    if (isSorted(a))
        cout << "Array is sorted\n";
    else
        cout << "Array is NOT sorted\n";

    return 0;
}
