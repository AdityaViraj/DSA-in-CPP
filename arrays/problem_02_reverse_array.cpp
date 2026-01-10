/*
### Problem 2: Reverse Array (In-Place)

**Concept:** Two pointers  
**Idea:** Swap symmetric elements from start and end.

- Time Complexity: O(n)
- Space Complexity: O(1)
- In-place algorithm (no extra array used)
*/

#include <iostream>
#include <vector>
#include <algorithm>
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

    int i = 0, j = n - 1;
    while (i < j) {
        swap(v[i], v[j]);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << v[i];
    }
    cout << "\n";

    return 0;
}
