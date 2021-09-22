#include <bits/stdc++.h>

using namespace std;

bool find(int a[], int n, int x)
{
    if(n==0)
    return false;
    if(x==a[0])
    return true;
    return find(a+1, n-1,x);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    cout << find(a, n,x) << endl;
}

