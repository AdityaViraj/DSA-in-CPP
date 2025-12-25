/*
Problem 01: Print all elements of an array

Input:
  n
  a1 a2 ... an

Output:
  a1 a2 ... an   (space-separated)

Approach:
  Read n and the array, then traverse once and print each element.

Time Complexity:  O(n)
Space Complexity: O(1) extra (excluding input array)
*/

#include <bits/stdc++.h>
using namespace std;

// Prints array elements in one line, space-separated.
static void printArray(const vector<long long>& a) {
    for (size_t i = 0; i < a.size(); i++) {
        cout << a[i] << (i + 1 == a.size() ? '\n' : ' ');
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    printArray(a);
    return 0;
}
