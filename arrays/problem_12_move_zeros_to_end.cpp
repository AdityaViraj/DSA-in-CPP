/*
Problem 12: Move All Zeros to the End (Maintain Order)

Approach:
- Use two pointers:
  slow → position to place next non-zero
  fast → scans the array
- When a non-zero is found, place it at slow index

Time Complexity:  O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& a) {
    int slow = 0;   // index for next non-zero

    for (int fast = 0; fast < (int)a.size(); fast++) {
        if (a[fast] != 0) {
            a[slow] = a[fast];
            slow++;
        }
    }

    // Fill remaining positions with 0
    for (int i = slow; i < (int)a.size(); i++) {
        a[i] = 0;
    }
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

    moveZerosToEnd(a);

    cout << "Array after moving zeros to end:\n";
    printArray(a);

    return 0;
}
