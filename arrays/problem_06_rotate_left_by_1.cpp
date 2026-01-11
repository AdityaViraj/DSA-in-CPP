/*
Problem 06: Rotate array left by 1
Given an array, rotate it left by one position (first element moves to end).

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <iostream>
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
    
    if(n==0 || n==1) return 0;

    int first=a[0];

    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=first;

    for(int i=0;i<n;i++)
    {
        if(i>0) cout<<" ";
        cout<<a[i];
    }
    cout<<"\n";
    return 0;
}
