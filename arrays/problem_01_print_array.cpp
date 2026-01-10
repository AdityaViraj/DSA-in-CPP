
/*
### Problem 1: Print Array

**Concept:** Array traversal  
**Idea:** Visit each element once and print it in order.

- Time Complexity: O(n)
- Space Complexity: O(1) extra
- Common Pitfall: Accessing vector indices without resizing

Printing is done carefully to avoid extra spaces.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(i > 0) cout << " ";
        cout << v[i];
    }
    cout << "\n";

    return 0;
}
