/*
Problem 08: Frequency of Digits (0–9)

Approach:
- Create an array freq of size 10 initialized to 0
- Traverse the given array
- If element is between 0 and 9, increment freq[element]

Time Complexity:  O(n)
Space Complexity: O(1)   (constant size array of length 10)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> frequency0to9(const vector<int>& a) {
    vector<int> freq(10, 0);   // indices 0 to 9

    for (int x : a) {
        if (x >= 0 && x <= 9) {
            freq[x]++;
        }
    }
    return freq;
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

    vector<int> freq = frequency0to9(a);

    cout << "Digit frequencies (0–9):\n";
    for (int d = 0; d <= 9; d++) {
        if (freq[d] > 0) {
            cout << d << " -> " << freq[d] << "\n";
        }
    }

    return 0;
}
