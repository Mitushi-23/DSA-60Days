#include <bits/stdc++.h>

using namespace std;

int last(int a[], int n , int x)
{
    if(n==0)
    return -1;
     
    if(a[n-1]==x)
    return n-1;
   return  last(a,n-1 , x);
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
   
    cout << last(a, n, x) << endl;
}

