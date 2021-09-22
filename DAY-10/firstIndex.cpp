#include <bits/stdc++.h>

using namespace std;

int first(int a[], int n , int x,int i)
{
    if(n==0)
    return -1;
    if(a[0]==x)
    return i;
    i++;
   return first(a+1,n-1 , x,i);
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
    int i=0;
    cout << first(a, n, x,i) << endl;
}

