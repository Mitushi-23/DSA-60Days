#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> occurance;
    for(int i=0;i<n;i++)
    {
        occurance[arr[i]]++;
    }
    int mx=INT_MIN;
    int num;
    for(int i=0;i<n;i++)
    {
        if(occurance.at(arr[i])>mx)
        {
            mx = occurance.at(arr[i]);
            num = arr[i];
        }
    }
    cout << num << endl;
}