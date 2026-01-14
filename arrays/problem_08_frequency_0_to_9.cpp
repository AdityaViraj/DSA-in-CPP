/*
Problem 08: Frequency of digits (0 to 9)
Count how many times digits 0–9 appear in the array.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int freq[10] = {0};

    for (int i = 0; i < n; i++) {
        if (v[i] >= 0 && v[i] <= 9) {
            freq[v[i]]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << i << " -> " << freq[i] << "\n";
    }

    return 0;
}
