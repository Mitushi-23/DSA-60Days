#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    unordered_map<int, bool> search;
    int n;
    cin >> n;
    int arr[n];
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
        search[arr[i]] = false;
    }
    int max_length = 0;
    int start = arr[0];
    int end = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int val1 = curr;
        int val2 = curr+1;
        // int v1=val1;
        // int v2=val2;
        int l = 0;
        if (search[curr] == true)
        {
            continue;
        }
        while (val1 >= mn)
        {
            cout << "val1 = " << val1 << endl;
            if(search.count(val1)==0)
            {
                break;
            }
            if (search[val1] == false)
            {
                search[val1] = true;
                l++;
            }
            else
            {
                break;
            }
            val1--;
        }
        while (val2 <= mx)
        {
            cout << "val2 = " << val2 << endl;
            if(search.count(val2)==0)
            {
                break;
            }
            if (search[val2] == false)
            {
                search[val2] = true;
                l++;
            }
            else
            {
                break;
            }
            val2++;
        }
        if (l >= max_length)
        {
            max_length = l;
            start = val1+1;
            end = val2-1;
        }
    }
    cout << start << " " << end << endl;
    cout << max_length << endl;
    // cout << search[4] << endl;
}