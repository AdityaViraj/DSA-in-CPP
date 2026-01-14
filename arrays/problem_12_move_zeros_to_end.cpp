/*
Problem 12: Move zeros to end (keep order of non-zero elements)
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int write = 0;  

    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[write] = a[i];
            write++;
        }
    }

    for (int i = write; i < n; i++) {
        a[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << "\n";

    return 0;
}
