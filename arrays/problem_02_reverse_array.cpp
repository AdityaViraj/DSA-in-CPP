/*
Problem 02: Reverse an Array (In-Place)

Approach:
- Use two pointers:
  left starts at 0
  right starts at n-1
- Swap a[left] and a[right]
- Move left++ and right-- until left >= right

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &a) {
    int left = 0;
    int right = (int)a.size() - 1;

    while (left < right) {
        swap(a[left], a[right]);
        left++;
        right--;
    }
}

void printArray(const vector<int> &a) {
    for (int x : a) cout << x << " ";
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Original: ";
    printArray(a);

    reverseArray(a);

    cout << "Reversed: ";
    printArray(a);

    return 0;
}
