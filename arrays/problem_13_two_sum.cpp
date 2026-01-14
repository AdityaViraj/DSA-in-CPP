/*
Problem 13: Two Sum (Hashing)
Find if there exist two elements such that their sum equals target.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int target;
    cin >> target;

    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        int need = target - a[i];

        if (seen.count(need)) {
            cout << "YES\n";
            return 0;
        }

        seen.insert(a[i]);
    }

    cout << "NO\n";
    return 0;
}
