#include <bits/stdc++.h>

using namespace std;

void all(int a[], int n, int x, int i)
{
    if (n == 0)
        return;
    if (a[0] == x)
    {
        cout << i << " ";
    }
    i++;
    return all(a + 1, n - 1, x, i);
}

void all1(int a[], int n, int x)
{
    if (n == 0)
        return;
    if (a[n - 1] == x)
        cout << n - 1 << " ";
    return all1(a, n - 1, x);
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
    int i = 0;
    all(a, n, x, i);
    cout << endl;
    all1(a, n, x);
    cout << endl;
}
