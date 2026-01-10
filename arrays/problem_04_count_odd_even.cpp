/*### Problem 4: Count Odd and Even

Traverse the array once and use modulo operation:
- Even if `x % 2 == 0`
- Odd otherwise

**Time Complexity:** O(n)  
**Space Complexity:** O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int odd=0;
    int even=0;

    vector<int> a(n);
    for(int i = 0; i < n; i++) 
    {
    cin >> a[i];
    if(a[i] % 2 == 0) even++;
    else odd++;
    }

    cout << even << " " << odd << "\n";
    return 0;
}
