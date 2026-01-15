/*
Problem 09: Linear Search
Find the index of a given key in an array.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& v, int key)
{
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == key)
            return i;
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int key;
    cin >> key;

    int index = linearSearch(v, key);
    cout << index << "\n";

    return 0;
}
