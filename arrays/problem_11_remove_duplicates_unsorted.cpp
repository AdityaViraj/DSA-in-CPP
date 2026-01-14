/*
Problem 11: Remove duplicates (unsorted, keep order)
Given an array, remove duplicates while preserving the order of first appearance.

Example:
Input:  2 4 2 6 4 7 2
Output: 2 4 6 7

Time Complexity:  O(n) average
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

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    unordered_set<int> seen;
    vector<int> ans;
    ans.reserve(n);

    for (int x : v) {
        if (!seen.count(x)) {      // first time seeing x
            seen.insert(x);
            ans.push_back(x);
        }
    }

    for (int i = 0; i < (int)ans.size(); i++) {
        if (i) cout << " ";
        cout << ans[i];
    }
    cout << "\n";
    return 0;
}
