/*
### Problem 3: Maximum Element

**Approach:** Linear scan  
- Start with `mx = a[0]`
- Update `mx` whenever `a[i] > mx`

**Time Complexity:** O(n)  
**Space Complexity:** O(1)
 */

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int mx=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
        }
    }
    cout<<mx<<"\n";
    return 0;
}
