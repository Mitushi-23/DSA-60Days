#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    if (binary_search(a, a + n, k))
        cout << 1 << endl;
    else
        cout << -1 << endl;

    return 0;
}
