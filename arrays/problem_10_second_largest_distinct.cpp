/*
Problem 10: Second Largest Distinct Element

Given an array, find the second largest distinct element.
If it does not exist, print -1.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n < 2) {
        cout << -1 << "\n";
        return 0;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (v[i] > largest) {
            second = largest;
            largest = v[i];
        }
        else if (v[i] < largest && v[i] > second) {
            second = v[i];
        }
    }

    if (second == INT_MIN) {
        cout << -1 << "\n";
    } else {
        cout << second << "\n";
    }

    return 0;
}
