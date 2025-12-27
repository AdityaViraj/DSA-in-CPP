/*
Problem 07: Rotate Array Right by K

Approach (Reverse Method):
1. Reverse the entire array
2. Reverse first k elements
3. Reverse remaining n-k elements

Time Complexity:  O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateRightByK(vector<int>& a, int k) {
    int n = a.size();
    if (n == 0) return;

    k = k % n;          // handle k > n
    if (k == 0) return;

    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
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
    for (int i = 0; i < n; i++) cin >> a[i];

    int k;
    cout << "Enter k: ";
    cin >> k;

    rotateRightByK(a, k);

    cout << "Array after right rotation by k:\n";
    printArray(a);

    return 0;
}
