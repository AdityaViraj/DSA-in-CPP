/*
Problem 04: Count Odd and Even Numbers in an Array

Approach:
- Traverse the array once
- Use modulo operator (%) to check parity
- Maintain two counters

Time Complexity:  O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

pair<int, int> countOddEven(const vector<int>& a) {
    int odd = 0, even = 0;

    for (int x : a) {
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }

    return {odd, even};
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

    auto result = countOddEven(a);
    cout << "Odd count  : " << result.first << endl;
    cout << "Even count : " << result.second << endl;

    return 0;
}
