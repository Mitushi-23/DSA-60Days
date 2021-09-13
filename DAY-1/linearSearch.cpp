#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element to be searched" << endl;
    cin >> x;
    int count;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count = i + 1;
            break;
        }
        else
            count = 0;
    }
    if (count != 0)
        cout << "Element is present at " << count << " position" << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}