/*
Problem 10: Second Largest DISTINCT Element in an Array

Approach:
- Maintain two variables:
    largest  -> largest element seen so far
    second   -> second largest distinct element
- Traverse the array once
- Update carefully to avoid duplicates

Time Complexity:  O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool secondLargestDistinct(const vector<int>& a, int& result) {
    if (a.size() < 2) return false;

    int largest = INT_MIN;
    int second  = INT_MIN;

    for (int x : a) {
        if (x > largest) {
            if (largest != INT_MIN) {
                second = largest;
            }
            largest = x;
        }
        else if (x < largest && x > second) {
            second = x;
        }
    }

    if (second == INT_MIN) return false;

    result = second;
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

    int ans;
    if (secondLargestDistinct(a, ans)) {
        cout << "Second largest distinct element: " << ans << "\n";
    } else {
        cout << "Second largest distinct element does not exist\n";
    }

    return 0;
}
