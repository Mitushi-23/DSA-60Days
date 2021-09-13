#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    int mid = (l + r) / 2;
    if (l <= r)
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            return binarySearch(arr, mid + 1, r, x);
        }
        else if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid - 1, x);
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the no. of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in ascending order" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element to be searched" << endl;
    cin >> x;
    sort(arr, arr + n);
    int l = 0;
    int r = n - 1;
    int ans = binarySearch(arr, l, r, x);
    if (ans == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element is found at position " << ans + 1 << endl;
    return 0;
}