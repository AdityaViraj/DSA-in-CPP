/*
Problem 05: Check if Array is Sorted

Description:
Given an array of integers, determine whether the array is sorted
in non-decreasing (ascending) order.

Approach:
Traverse the array once and compare each element with its next.
If any element is greater than the next one, the array is unsorted.

Time Complexity:
O(n)

Space Complexity:
O(1)

Where:
n = number of elements in the array
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
    
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            cout<<"Unsorted"<<endl;
            return 0; // exit immediately
        }
    }
    cout<<"Sorted"<<endl;
    return 0;
}
