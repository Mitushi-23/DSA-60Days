#include <bits/stdc++.h>

using namespace std;

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
    int mid, count;
    sort(arr, arr + n);
    int l, r;
    l = 0;
    r = n - 1;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            cout << "Element is found at position " << mid + 1 << endl;
            count++;
            break;
        }
        else if (x > arr[mid])
        {
            l = mid + 1;
        }
        else if (x < arr[mid])
        {
            r = mid - 1;
        }
    }
    if (count == 0)
        cout << "Element not found" << endl;

    return 0;
}