/*
Problem 11: Remove Duplicates from an Unsorted Array (Keep Order)

Approach:
- Use a hash set (unordered_set) to track seen elements
- Traverse the array from left to right
- Add element to result only if it has not appeared before

Time Complexity:  O(n) average
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> removeDuplicates(const vector<int>& a) {
    unordered_set<int> seen;
    vector<int> result;

    for (int x : a) {
        if (seen.find(x) == seen.end()) {
            result.push_back(x);
            seen.insert(x);
        }
    }
    return result;
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

    vector<int> uniqueArray = removeDuplicates(a);

    cout << "Array after removing duplicates:\n";
    for (int x : uniqueArray) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
