/*
Problem 03: Find the Maximum Element in an Array

Approach:
- Initialize max with the smallest possible integer
- Traverse the array
- Update max whenever a larger element is found

Time Complexity:  O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMax(const vector<int>& a) {
    int mx = INT_MIN;   // smallest possible integer

    for (int x : a) {
        if (x > mx) {
            mx = x;
        }
    }
    return mx;
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

    cout << "Maximum element: " << findMax(a) << "\n";

    return 0;
}
