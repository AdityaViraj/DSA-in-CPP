/*
Problem 09: Linear Search in an Array

Approach:
- Traverse the array from left to right
- Compare each element with the key
- Return index as soon as match is found
- If traversal ends, return -1

Time Complexity:  O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& a, int key) {
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] == key) {
            return i;   // found
        }
    }
    return -1;          // not found
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

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int index = linearSearch(a, key);

    if (index == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << index << "\n";

    return 0;
}
